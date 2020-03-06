OUTPUT_FORMAT("elf32-littlearm")
OUTPUT_ARCH(arm)
ENTRY(_start)
SECTIONS
{
 . = (0x40000000 + 0x100000);
 .text : {
  __text_start = .;
  KEEP(*(.text.boot.vectab1))
  KEEP(*(.text.boot.vectab2))
  KEEP(*(.text.boot))
  *(.text* .sram.text.glue_7* .gnu.linkonce.t.*)
  __text_end = .;
 }
 .interp : { *(.interp) }
 .hash : { *(.hash) }
 .dynsym : { *(.dynsym) }
 .dynstr : { *(.dynstr) }
 .rel.text : { *(.rel.text) *(.rel.gnu.linkonce.t*) }
 .rela.text : { *(.rela.text) *(.rela.gnu.linkonce.t*) }
 .rel.data : { *(.rel.data) *(.rel.gnu.linkonce.d*) }
 .rela.data : { *(.rela.data) *(.rela.gnu.linkonce.d*) }
 .rel.rodata : { *(.rel.rodata) *(.rel.gnu.linkonce.r*) }
 .rela.rodata : { *(.rela.rodata) *(.rela.gnu.linkonce.r*) }
 .rel.got : { *(.rel.got) }
 .rela.got : { *(.rela.got) }
 .rel.ctors : { *(.rel.ctors) }
 .rela.ctors : { *(.rela.ctors) }
 .rel.dtors : { *(.rel.dtors) }
 .rela.dtors : { *(.rela.dtors) }
 .rel.init : { *(.rel.init) }
 .rela.init : { *(.rela.init) }
 .rel.fini : { *(.rel.fini) }
 .rela.fini : { *(.rela.fini) }
 .rel.bss : { *(.rel.bss) }
 .rela.bss : { *(.rela.bss) }
 .rel.plt : { *(.rel.plt) }
 .rela.plt : { *(.rela.plt) }
 .init : { *(.init) } =0x9090
 .plt : { *(.plt) }
 __exidx_start = .;
 .ARM.exidx : { *(.ARM.exidx* .gnu.linkonce.armexidx.*) }
 __exidx_end = .;
 .rodata : ALIGN(4) {
  __rodata_start = .;
  *(.rodata .rodata.* .gnu.linkonce.r.*)
  __start_ta_head_section = . ;
  *(ta_head_section)
  __stop_ta_head_section = . ;
  . = ALIGN(4);
  __rodata_end = .;
 }
 .data : ALIGN(4) {
  __data_start_rom = .;
  __data_start = .;
  *(.data .data.* .gnu.linkonce.d.*)
 }
 .ctors : ALIGN(4) {
  __ctor_list = .;
  *(.ctors)
  __ctor_end = .;
 }
 .dtors : ALIGN(4) {
  __dtor_list = .;
  *(.dtors)
  __dtor_end = .;
 }
 .got : { *(.got.plt) *(.got) }
 .dynamic : { *(.dynamic) }
 __data_end = .;
 .bss : ALIGN(4) {
  KEEP(*(.bss.prebss.*))
  . = ALIGN(4);
  __bss_start = .;
  *(.bss .bss.*)
  *(.gnu.linkonce.b.*)
  *(COMMON)
  . = ALIGN(4);
  __bss_end = .;
 }
 _end = .;
 _end_of_ram = .;
 /DISCARD/ : { *(.comment .note .eh_frame) }
}
