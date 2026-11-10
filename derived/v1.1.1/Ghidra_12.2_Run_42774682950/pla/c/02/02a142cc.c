/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a142cc; name: FUN_02a142cc
 */


undefined8 FUN_02a142cc(long param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  if ((int)param_2 < 10) {
    lVar3 = *(long *)(*(long *)(param_1 + 0x10) + 0x28);
    lVar1 = lVar3 + (ulong)param_2 * 4;
    if (*(int *)(lVar1 + 0x1a8) != 0) {
      uVar4 = (ulong)param_2;
      *(undefined8 *)(lVar3 + uVar4 * 8 + 0x18) = 0xf8;
      lVar2 = lVar3 + uVar4 * 4;
      lVar3 = lVar3 + uVar4 * 0x18;
      *(undefined4 *)(lVar2 + 0x68) = 0;
      *(undefined4 *)(lVar2 + 0x180) = 0;
      *(undefined4 *)(lVar1 + 0x1a8) = 0;
      *(undefined8 *)(lVar3 + 0x90) = 0x1f0000001f;
      *(undefined8 *)(lVar3 + 0x98) = 0x1f0000001f;
      *(undefined8 *)(lVar3 + 0xa0) = 0x1f0000001f;
      return 1;
    }
  }
  return 0;
}


