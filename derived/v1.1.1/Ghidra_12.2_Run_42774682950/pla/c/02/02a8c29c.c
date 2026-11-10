/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a8c29c; name: FUN_02a8c29c
 */


byte * FUN_02a8c29c(long param_1,byte *param_2,byte *param_3)

{
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  long *plVar4;
  undefined8 *puVar5;
  uint uVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  byte *pbVar10;
  byte *pbVar11;
  
  plVar4 = DAT_043f1798;
  if (param_2 == param_3) {
LAB_02a8c2dc:
    pbVar10 = (byte *)FUN_02a82fdc(param_1,param_2,param_3);
    plVar4 = DAT_043f1798;
    if (pbVar10 != param_2) {
      return pbVar10;
    }
    if (pbVar10 == param_3) {
      return pbVar10;
    }
    if ((param_2 + 1 == param_3) || (*param_2 != 0x5c)) goto LAB_02a8c5fc;
    bVar3 = param_2[1];
    pbVar10 = param_2 + 2;
    if (bVar3 != 0x28) {
      pbVar10 = param_2;
    }
    if (pbVar10 == param_2) {
      uVar6 = (uint)bVar3;
      if (uVar6 - 0x31 < 9) {
        if ((bVar3 & 0xf8) == 0x30 || (uVar6 & 0xfe) == 0x38) {
          FUN_02a8663c(param_1,uVar6 - 0x30);
          return param_2 + 2;
        }
        return param_2;
      }
      goto LAB_02a8c5fc;
    }
    if ((*(byte *)(param_1 + 0x18) >> 1 & 1) == 0) {
      lVar8 = tpidr_el0;
      plVar7 = *(long **)(lVar8 + 0x20);
      if (*(long **)(lVar8 + 0x20) == (long *)0x0) {
        *(long **)(lVar8 + 0x20) = DAT_043f1798;
        plVar7 = plVar4;
      }
      puVar5 = (undefined8 *)(**(code **)(*plVar7 + 0x10))(plVar7,0x18,8);
      iVar1 = *(int *)(param_1 + 0x1c) + 1;
      lVar8 = *(long *)(param_1 + 0x38);
      *(int *)(param_1 + 0x1c) = iVar1;
      uVar9 = *(undefined8 *)(lVar8 + 8);
      *puVar5 = &PTR_LAB_0427f478;
      puVar5[1] = uVar9;
      *(int *)(puVar5 + 2) = iVar1;
      *(undefined8 **)(lVar8 + 8) = puVar5;
      *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(*(long *)(param_1 + 0x38) + 8);
    }
    uVar2 = *(undefined4 *)(param_1 + 0x1c);
    do {
      pbVar11 = pbVar10;
      if (pbVar11 == param_3) goto LAB_02a8c614;
      uVar9 = *(undefined8 *)(param_1 + 0x38);
      iVar1 = *(int *)(param_1 + 0x1c);
      pbVar10 = (byte *)FUN_02a8c29c(param_1,pbVar11,param_3);
      if (pbVar10 == pbVar11) break;
      pbVar10 = (byte *)FUN_02a8c618(param_1,pbVar10,param_3,uVar9,iVar1 + 1,
                                     *(int *)(param_1 + 0x1c) + 1);
    } while (pbVar10 != pbVar11);
    plVar4 = DAT_043f1798;
    if ((pbVar11 + 1 == param_3) || (*pbVar11 != 0x5c)) {
LAB_02a8c614:
                    /* WARNING: Subroutine does not return */
      FUN_02a80af0();
    }
    param_2 = pbVar11 + 2;
    if (pbVar11[1] != 0x29) {
      param_2 = pbVar11;
    }
    if (param_2 == pbVar11) goto LAB_02a8c614;
    if ((*(byte *)(param_1 + 0x18) >> 1 & 1) != 0) {
      return param_2;
    }
    lVar8 = tpidr_el0;
    plVar7 = *(long **)(lVar8 + 0x20);
    if (*(long **)(lVar8 + 0x20) == (long *)0x0) {
      *(long **)(lVar8 + 0x20) = DAT_043f1798;
      plVar7 = plVar4;
    }
    puVar5 = (undefined8 *)(**(code **)(*plVar7 + 0x10))(plVar7,0x18,8);
    lVar8 = *(long *)(param_1 + 0x38);
    uVar9 = *(undefined8 *)(lVar8 + 8);
    *puVar5 = &PTR_LAB_0427f4a8;
    puVar5[1] = uVar9;
    *(undefined4 *)(puVar5 + 2) = uVar2;
  }
  else {
    pbVar10 = param_2 + 1;
    uVar6 = (uint)*param_2;
    if ((pbVar10 == param_3) && (uVar6 == 0x24)) goto LAB_02a8c2dc;
    if ((0x2e < uVar6 - 0x2e) || ((1L << ((ulong)(uVar6 - 0x2e) & 0x3f) & 0x600000000001U) == 0)) {
      FUN_02a86478(param_1);
      return pbVar10;
    }
    if ((uVar6 == 0x5c) && (pbVar10 != param_3)) {
      if ((*pbVar10 - 0x24 < 0x3b) &&
         ((1L << ((ulong)(*pbVar10 - 0x24) & 0x3f) & 0x580000000000441U) != 0)) {
        FUN_02a86478(param_1);
        return param_2 + 2;
      }
      goto LAB_02a8c2dc;
    }
    if (uVar6 != 0x2e) goto LAB_02a8c2dc;
    lVar8 = tpidr_el0;
    plVar7 = *(long **)(lVar8 + 0x20);
    if (*(long **)(lVar8 + 0x20) == (long *)0x0) {
      *(long **)(lVar8 + 0x20) = DAT_043f1798;
      plVar7 = plVar4;
    }
    puVar5 = (undefined8 *)(**(code **)(*plVar7 + 0x10))(plVar7,0x10,8);
    lVar8 = *(long *)(param_1 + 0x38);
    uVar9 = *(undefined8 *)(lVar8 + 8);
    *puVar5 = &PTR_LAB_0427f5c8;
    puVar5[1] = uVar9;
    param_2 = pbVar10;
  }
  *(undefined8 **)(lVar8 + 8) = puVar5;
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(*(long *)(param_1 + 0x38) + 8);
LAB_02a8c5fc:
  return param_2;
}


