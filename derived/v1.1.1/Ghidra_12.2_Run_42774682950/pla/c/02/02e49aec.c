/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e49aec; name: FUN_02e49aec
 */


/* WARNING: Removing unreachable block (ram,0x02e49b84) */
/* WARNING: Removing unreachable block (ram,0x02e49c20) */

void FUN_02e49aec(long param_1,undefined8 param_2,long *param_3,undefined4 param_4,int *param_5)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined1 (*pauVar5) [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 (*local_50) [16];
  undefined1 (*local_38) [16];
  
  uVar2 = FUN_02e49cb4(param_1,param_2,*param_3,&local_38,param_4,param_5);
  if ((uVar2 & 1) == 0) {
    return;
  }
  lVar3 = FUN_02e4a118(param_1 + 0x18);
  if (lVar3 == 0) {
    *param_5 = 0x34;
    return;
  }
  *(undefined8 *)(lVar3 + 0x280) = 0xffffffff00000000;
  if (*param_5 != 1) {
    return;
  }
  *(int *)(lVar3 + 0x284) = *(int *)(*param_3 + 0x284) + 1;
  local_50 = (undefined1 (*) [16])*param_3;
  iVar1 = *(int *)local_50[0x28];
  auVar6 = *local_50;
  auVar7 = local_50[1];
  if (1 < iVar1) {
    if (iVar1 == 2) {
      lVar4 = 1;
    }
    else {
      lVar4 = 1;
      pauVar5 = local_50 + 5;
      do {
        auVar7 = NEON_fmax(auVar7,pauVar5[-2],4);
        lVar4 = lVar4 + 2;
        auVar6 = NEON_fmin(auVar6,pauVar5[-3],4);
        auVar6 = NEON_fmin(auVar6,pauVar5[-1],4);
        auVar7 = NEON_fmax(auVar7,*pauVar5,4);
        pauVar5 = pauVar5 + 4;
      } while ((long)iVar1 - ((ulong)(iVar1 - 1U) & 1) != lVar4);
      if ((iVar1 - 1U & 1) == 0) goto LAB_02e49bd4;
    }
    auVar7 = NEON_fmax(auVar7,(local_50 + lVar4 * 2)[1],4);
    auVar6 = NEON_fmin(auVar6,local_50[lVar4 * 2],4);
  }
LAB_02e49bd4:
  uStack_68 = auVar6._8_8_;
  local_70 = auVar6._0_8_;
  uStack_58 = auVar7._8_8_;
  uStack_60 = auVar7._0_8_;
  FUN_02e49ed0(param_1,&local_70,lVar3,0,param_5);
  iVar1 = *(int *)local_38[0x28];
  auVar6 = *local_38;
  auVar7 = local_38[1];
  if (1 < iVar1) {
    if (iVar1 == 2) {
      lVar4 = 1;
    }
    else {
      lVar4 = 1;
      pauVar5 = local_38 + 5;
      do {
        auVar7 = NEON_fmax(auVar7,pauVar5[-2],4);
        lVar4 = lVar4 + 2;
        auVar6 = NEON_fmin(auVar6,pauVar5[-3],4);
        auVar6 = NEON_fmin(auVar6,pauVar5[-1],4);
        auVar7 = NEON_fmax(auVar7,*pauVar5,4);
        pauVar5 = pauVar5 + 4;
      } while ((long)iVar1 - ((ulong)(iVar1 - 1U) & 1) != lVar4);
      if ((iVar1 - 1U & 1) == 0) goto LAB_02e49c70;
    }
    auVar7 = NEON_fmax(auVar7,(local_38 + lVar4 * 2)[1],4);
    auVar6 = NEON_fmin(auVar6,local_38[lVar4 * 2],4);
  }
LAB_02e49c70:
  local_50 = local_38;
  uStack_68 = auVar6._8_8_;
  local_70 = auVar6._0_8_;
  uStack_58 = auVar7._8_8_;
  uStack_60 = auVar7._0_8_;
  FUN_02e49ed0(param_1,&local_70,lVar3,0,param_5);
  *param_3 = lVar3;
  return;
}


