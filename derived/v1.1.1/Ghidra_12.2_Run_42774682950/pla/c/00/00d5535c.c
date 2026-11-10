/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d5535c; name: FUN_00d5535c
 */


void FUN_00d5535c(long *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  
  FUN_00d55688();
  FUN_00d5c5d0(param_1);
  uVar9 = (uint)*(byte *)((long)param_1 + 0x6ef);
  if (*(byte *)((long)param_1 + 0x6ef) == 0) {
    return;
  }
  lVar4 = param_1[0xdd];
  uVar11 = 0;
  if (*(char *)((long)param_1 + 0x6ee) != '\0') goto LAB_00d553e0;
  do {
    uVar6 = 0;
    while( true ) {
      uVar11 = uVar11 + 1;
      if (uVar9 <= uVar11) {
        return;
      }
      if (uVar6 == 0) break;
LAB_00d553e0:
      uVar9 = 0;
      do {
        iVar3 = uVar9 + *(ushort *)((long)param_1 + 0x6ec) +
                (int)param_1[(long)(int)lVar4 * 0xc + 200] * uVar11;
        uVar7 = (**(code **)(*param_1 + 0x160))(param_1,(int)param_1[0xdd],iVar3);
        if ((uVar7 & 1) != 0) {
          (**(code **)(*param_1 + 0x168))(param_1,(int)param_1[0xdd],iVar3);
          iVar2 = 0;
          if ((int)param_1[0xdd] != 2) {
            iVar2 = (int)param_1[0xdd];
          }
          lVar8 = FUN_00d2ee28(param_1 + 0x30,&DAT_043ab7d8 + (long)iVar2 * 0x28);
          lVar1 = **(long **)(lVar8 + 0x838);
          lVar8 = (*(long **)(lVar8 + 0x838))[1];
          if ((lVar1 != lVar8) &&
             (*(char *)(lVar1 + 0x20) != '\0' || *(int *)(lVar1 + 0x24) != iVar3)) {
            lVar5 = lVar1 + 0x30;
            do {
              lVar10 = lVar5;
              lVar1 = lVar8;
              if (lVar8 == lVar10) break;
              lVar5 = lVar10 + 0x30;
            } while ((*(char *)(lVar10 + 0x20) != '\0') ||
                    (lVar1 = lVar10, *(int *)(lVar10 + 0x24) != iVar3));
          }
          if ((lVar1 != 0) && ((lVar8 != lVar1 && (iVar2 = *(int *)(lVar1 + 0x28), iVar2 != -1)))) {
            lVar1 = param_1[0xdd];
            uVar6 = (**(code **)(*param_1 + 0x170))(param_1,(int)lVar1,iVar3);
            FUN_00d543c4(param_1,(int)lVar1,iVar2,uVar6 & 1);
          }
        }
        uVar6 = (uint)*(byte *)((long)param_1 + 0x6ee);
        uVar9 = uVar9 + 1;
      } while (uVar9 < uVar6);
      uVar9 = (uint)*(byte *)((long)param_1 + 0x6ef);
    }
  } while( true );
}


