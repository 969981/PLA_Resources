/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01085f94; name: FUN_01085f94
 */


undefined4 FUN_01085f94(ulong *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  
  if (DAT_043ba3f8 != (undefined8 *)0x0) {
    uVar2 = *param_1;
    puVar1 = &DAT_043ba3f8;
    if ((ulong)DAT_043ba3f8[4] >= uVar2) {
      puVar1 = DAT_043ba3f8;
    }
    for (puVar3 = (undefined8 *)DAT_043ba3f8[(ulong)DAT_043ba3f8[4] < uVar2];
        puVar3 != (undefined8 *)0x0; puVar3 = (undefined8 *)puVar3[(ulong)puVar3[4] < uVar2]) {
      if ((ulong)puVar3[4] >= uVar2) {
        puVar1 = puVar3;
      }
    }
    if (((undefined8 **)puVar1 != &DAT_043ba3f8) && ((ulong)puVar1[4] <= uVar2)) {
      return *(undefined4 *)(puVar1 + 8);
    }
  }
  return 0;
}


