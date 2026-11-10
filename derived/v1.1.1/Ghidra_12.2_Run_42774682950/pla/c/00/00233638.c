/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00233638; name: FUN_00233638
 */


void FUN_00233638(long param_1,undefined8 *param_2,long param_3)

{
  ushort uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  FUN_00236348(param_1,param_3);
  *param_2 = *(undefined8 *)(param_1 + 8);
  param_2[1] = param_3 + 8;
  FUN_00236724(param_2 + 0xf);
  param_2[0x14] = param_2;
  param_2[0x15] = param_2 + 0xf;
  plVar2 = (long *)(**(code **)PTR_DAT_04372ba8)(0x10,4,*(undefined8 *)PTR_DAT_04372bb8);
  if (plVar2 != (long *)0x0) {
    *plVar2 = (long)(PTR_DAT_04372be0 + 0x10);
    plVar2[1] = (long)param_2;
  }
  param_2[0x1a] = plVar2;
  if (*(short *)(param_3 + 0x40) != 0) {
    lVar5 = 0;
    uVar6 = 0;
    plVar2 = param_2 + 2;
    do {
      plVar3 = (long *)FUN_002365c8(param_1,*(long *)(param_3 + 0x28) + lVar5);
      lVar4 = *plVar3;
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 0x80;
      *plVar3 = *plVar2;
      *(long **)(lVar4 + 8) = plVar2;
      *(long **)(*plVar2 + 8) = plVar3;
      *plVar2 = lVar4;
    } while (uVar6 < *(ushort *)(param_3 + 0x40));
  }
  if (*(short *)(param_3 + 0x42) != 0) {
    lVar5 = 0;
    uVar6 = 0;
    do {
      FUN_0025a5c4(param_2 + 0x14,*(long *)(param_3 + 0x30) + lVar5);
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 0x48;
    } while (uVar6 < *(ushort *)(param_3 + 0x42));
  }
  uVar1 = *(ushort *)(param_3 + 0x44);
  param_2[0x18] = *(undefined8 *)(param_3 + 0x38);
  *(uint *)(param_2 + 0x19) = (uint)uVar1;
  return;
}


