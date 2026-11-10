/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032c311c; name: FUN_032c311c
 */


void FUN_032c311c(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)(*(long *)PTR_PTR_0434a080 + 0x10))(PTR_PTR_0434a080,0x100,0);
  *param_1 = (long)puVar1;
  param_1[1] = 0xf00000000;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0xffffffffffffffff;
    *(undefined8 *)(*param_1 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(*param_1 + 0x20) = 0xffffffffffffffff;
    *(undefined8 *)(*param_1 + 0x30) = 0xffffffffffffffff;
    *(undefined8 *)(*param_1 + 0x40) = 0xffffffffffffffff;
    *(undefined8 *)(*param_1 + 0x50) = 0xffffffffffffffff;
    *(undefined8 *)(*param_1 + 0x60) = 0xffffffffffffffff;
    *(undefined8 *)(*param_1 + 0x70) = 0xffffffffffffffff;
    *(undefined8 *)(*param_1 + 0x80) = 0xffffffffffffffff;
    *(undefined8 *)(*param_1 + 0x90) = 0xffffffffffffffff;
    *(undefined8 *)(*param_1 + 0xa0) = 0xffffffffffffffff;
    *(undefined8 *)(*param_1 + 0xb0) = 0xffffffffffffffff;
    *(undefined8 *)(*param_1 + 0xc0) = 0xffffffffffffffff;
    *(undefined8 *)(*param_1 + 0xd0) = 0xffffffffffffffff;
    *(undefined8 *)(*param_1 + 0xe0) = 0xffffffffffffffff;
    *(undefined8 *)(*param_1 + 0xf0) = 0xffffffffffffffff;
    *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) & 0x80000000;
  }
  return;
}


