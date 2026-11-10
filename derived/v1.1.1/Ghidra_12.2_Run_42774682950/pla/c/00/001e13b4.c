/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001e13b4; name: FUN_001e13b4
 */


long FUN_001e13b4(long param_1,long param_2,undefined8 param_3,undefined4 param_4)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  int iVar6;
  long *plVar7;
  size_t sVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  char acStack_168 [264];
  
  if ((param_2 != 0) && ((*(ulong *)(param_1 + 0xf40) >> 0x33 & 1) != 0)) {
    lVar9 = param_2;
    uVar2 = 0;
    do {
      uVar12 = uVar2;
      lVar9 = *(long *)(lVar9 + 0x28);
      uVar2 = uVar12 + 1;
    } while (lVar9 != 0);
    if ((int)uVar2 != 1) {
      FUN_001f3934(param_1,"Shuffling %i addresses",uVar2 & 0xffffffff);
      uVar13 = uVar2 & 0xffffffff;
      plVar7 = (long *)FUN_002044c4(uVar13 << 3);
      if (plVar7 == (long *)0x0) {
        return 0;
      }
      uVar10 = 1;
      *plVar7 = param_2;
      lVar9 = param_2;
      do {
        lVar9 = *(long *)(lVar9 + 0x28);
        plVar7[uVar10] = lVar9;
        uVar10 = uVar10 + 1;
      } while (uVar13 != uVar10);
      lVar9 = FUN_002044c4(uVar13 << 2);
      if (lVar9 == 0) goto LAB_001e1578;
      iVar6 = FUN_001f32c0(param_1,lVar9,uVar13 << 2);
      if (iVar6 == 0) {
        uVar13 = uVar12;
        do {
          uVar3 = *(uint *)(lVar9 + uVar13 * 4);
          uVar1 = (int)uVar13 + 1;
          uVar4 = 0;
          if (uVar1 != 0) {
            uVar4 = uVar3 / uVar1;
          }
          uVar3 = uVar3 - uVar4 * uVar1;
          lVar11 = plVar7[uVar3];
          plVar7[uVar3] = plVar7[uVar13];
          plVar7[uVar13] = lVar11;
          uVar13 = uVar13 - 1;
        } while (0 < (long)uVar13);
        lVar11 = (uVar2 & 0xffffffff) - 1;
        plVar5 = plVar7;
        do {
          lVar11 = lVar11 + -1;
          *(long *)(*plVar5 + 0x28) = plVar5[1];
          plVar5 = plVar5 + 1;
        } while (lVar11 != 0);
        *(undefined8 *)(plVar7[uVar12] + 0x28) = 0;
        param_2 = *plVar7;
      }
      FUN_002044d4(lVar9);
      FUN_002044d4(plVar7);
    }
  }
  plVar7 = (long *)FUN_00204504(1,0x18);
  if (plVar7 == (long *)0x0) {
    return 0;
  }
  FUN_001e15a0(param_3,param_4,acStack_168);
  sVar8 = strlen(acStack_168);
  *plVar7 = param_2;
  plVar7[2] = 1;
  FUN_002053bc(plVar7 + 1);
  if (plVar7[1] == 0) {
    plVar7[1] = 1;
  }
  lVar9 = FUN_001e0b00(*(undefined8 *)(param_1 + 200),acStack_168,sVar8 + 1,plVar7);
  if (lVar9 != 0) {
    *(long *)(lVar9 + 0x10) = *(long *)(lVar9 + 0x10) + 1;
    return lVar9;
  }
LAB_001e1578:
  FUN_002044d4(plVar7);
  return 0;
}


