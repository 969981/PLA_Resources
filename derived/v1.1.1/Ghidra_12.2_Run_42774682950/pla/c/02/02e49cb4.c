/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e49cb4; name: FUN_02e49cb4
 */


/* WARNING: Removing unreachable block (ram,0x02e49d5c) */
/* WARNING: Removing unreachable block (ram,0x02e49e44) */

ulong FUN_02e49cb4(undefined8 param_1,undefined1 (*param_2) [16],long param_3,undefined8 param_4,
                  int param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  undefined1 (*pauVar6) [16];
  long lVar7;
  undefined1 (*pauVar8) [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 (*local_70) [16];
  undefined1 (*local_58) [16];
  
  if (*(int *)(param_3 + 0x284) <= param_5) {
    if (*(int *)(param_3 + 0x284) == param_5) {
      uVar5 = FUN_02e49ed0(param_1,param_2,param_3,param_4,param_6);
      return uVar5;
    }
    uVar4 = 0;
    goto LAB_02e49eb0;
  }
  iVar3 = FUN_02e49f44(param_1,param_2,param_3);
  lVar7 = param_3 + (long)iVar3 * 8;
  uVar5 = FUN_02e49cb4(param_1,param_2,*(undefined8 *)(lVar7 + 0x200),&local_58,param_5,param_6);
  if ((uVar5 & 1) == 0) {
    pauVar6 = (undefined1 (*) [16])(param_3 + (long)iVar3 * 0x20);
    uVar4 = 0;
    auVar10 = param_2[1];
    auVar11 = pauVar6[1];
    auVar9 = NEON_fmin(*param_2,*pauVar6,4);
    *(long *)(*pauVar6 + 8) = auVar9._8_8_;
    *(long *)*pauVar6 = auVar9._0_8_;
    auVar10 = NEON_fmax(auVar10,auVar11,4);
    *(long *)(pauVar6[1] + 8) = auVar10._8_8_;
    *(long *)pauVar6[1] = auVar10._0_8_;
    goto LAB_02e49eb0;
  }
  pauVar6 = *(undefined1 (**) [16])(lVar7 + 0x200);
  iVar2 = *(int *)pauVar6[0x28];
  auVar10 = *pauVar6;
  auVar11 = pauVar6[1];
  if (1 < iVar2) {
    if (iVar2 == 2) {
      lVar7 = 1;
    }
    else {
      lVar7 = 1;
      pauVar8 = pauVar6 + 5;
      do {
        auVar11 = NEON_fmax(auVar11,pauVar8[-2],4);
        lVar7 = lVar7 + 2;
        auVar10 = NEON_fmin(auVar10,pauVar8[-3],4);
        auVar10 = NEON_fmin(auVar10,pauVar8[-1],4);
        auVar11 = NEON_fmax(auVar11,*pauVar8,4);
        pauVar8 = pauVar8 + 4;
      } while ((long)iVar2 - ((ulong)(iVar2 - 1U) & 1) != lVar7);
      if ((iVar2 - 1U & 1) == 0) goto LAB_02e49e0c;
    }
    auVar11 = NEON_fmax(auVar11,(pauVar6 + lVar7 * 2)[1],4);
    auVar10 = NEON_fmin(auVar10,pauVar6[lVar7 * 2],4);
  }
LAB_02e49e0c:
  puVar1 = (undefined8 *)(param_3 + (long)iVar3 * 0x20);
  puVar1[1] = auVar10._8_8_;
  *puVar1 = auVar10._0_8_;
  puVar1[3] = auVar11._8_8_;
  puVar1[2] = auVar11._0_8_;
  local_70 = local_58;
  iVar3 = *(int *)local_58[0x28];
  auVar10 = *local_58;
  auVar11 = local_58[1];
  if (1 < iVar3) {
    if (iVar3 == 2) {
      lVar7 = 1;
    }
    else {
      lVar7 = 1;
      pauVar6 = local_58 + 5;
      do {
        auVar11 = NEON_fmax(auVar11,pauVar6[-2],4);
        lVar7 = lVar7 + 2;
        auVar10 = NEON_fmin(auVar10,pauVar6[-3],4);
        auVar10 = NEON_fmin(auVar10,pauVar6[-1],4);
        auVar11 = NEON_fmax(auVar11,*pauVar6,4);
        pauVar6 = pauVar6 + 4;
      } while ((long)iVar3 - ((ulong)(iVar3 - 1U) & 1) != lVar7);
      if ((iVar3 - 1U & 1) == 0) goto LAB_02e49e94;
    }
    auVar11 = NEON_fmax(auVar11,(local_58 + lVar7 * 2)[1],4);
    auVar10 = NEON_fmin(auVar10,local_58[lVar7 * 2],4);
  }
LAB_02e49e94:
  uStack_88 = auVar10._8_8_;
  local_90 = auVar10._0_8_;
  uStack_78 = auVar11._8_8_;
  uStack_80 = auVar11._0_8_;
  uVar4 = FUN_02e49ed0(param_1,&local_90,param_3,param_4,param_6);
LAB_02e49eb0:
  return (ulong)(uVar4 & 1);
}


