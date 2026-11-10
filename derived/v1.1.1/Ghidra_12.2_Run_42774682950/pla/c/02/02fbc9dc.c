/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fbc9dc; name: FUN_02fbc9dc
 */


void FUN_02fbc9dc(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  
  lVar2 = *(long *)(param_1 + 0x58);
  lVar4 = 0;
  if (lVar2 != 0) {
    lVar4 = lVar2 + param_1 + 0x58;
  }
  if (*(long *)(lVar4 + 0x68) == 0) {
    uVar1 = *(undefined8 *)(lVar4 + 0x30);
    param_2[1] = *(undefined8 *)(lVar4 + 0x38);
    *param_2 = uVar1;
    uVar1 = *(undefined8 *)(lVar4 + 0x40);
    param_2[3] = *(undefined8 *)(lVar4 + 0x48);
    param_2[2] = uVar1;
    return;
  }
  plVar3 = (long *)(lVar4 + 0x50);
  lVar4 = *plVar3;
  uVar5 = NEON_fminnmv(*(undefined1 (*) [16])((long)plVar3 + lVar4 + 0x80),4);
  uVar6 = NEON_fminnmv(*(undefined1 (*) [16])((long)plVar3 + lVar4 + 0xa0),4);
  uVar7 = NEON_fminnmv(*(undefined1 (*) [16])((long)plVar3 + lVar4 + 0xc0),4);
  param_2[1] = (ulong)uVar7;
  *param_2 = CONCAT44(uVar6,uVar5);
  uVar5 = NEON_fmaxnmv(*(undefined1 (*) [16])((long)plVar3 + lVar4 + 0x90),4);
  uVar6 = NEON_fmaxnmv(*(undefined1 (*) [16])((long)plVar3 + lVar4 + 0xb0),4);
  uVar7 = NEON_fmaxnmv(*(undefined1 (*) [16])((long)plVar3 + lVar4 + 0xd0),4);
  param_2[3] = (ulong)uVar7;
  param_2[2] = CONCAT44(uVar6,uVar5);
  return;
}


