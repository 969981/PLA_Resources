/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032a61d4; name: FUN_032a61d4
 */


void FUN_032a61d4(long param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_0434a080;
  if (*(char *)(param_1 + 0x148) == '\0') {
    (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))
              (PTR_PTR_0434a080,*(undefined8 *)(param_1 + 0x130),*(undefined8 *)(param_1 + 0x140));
  }
  *(undefined1 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x2c)) && (*(long *)(param_1 + 0x20) != 0)) {
    FUN_032cf244(puVar1,*(long *)(param_1 + 0x20),0x10,*(uint *)(param_1 + 0x2c) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0x80000000;
  return;
}


