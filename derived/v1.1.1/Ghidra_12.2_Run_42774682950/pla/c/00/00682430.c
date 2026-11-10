/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00682430; name: FUN_00682430
 */


undefined8 FUN_00682430(ulong *param_1,char *param_2)

{
  char *pcVar1;
  ulong uVar2;
  int iVar3;
  size_t sVar4;
  int iVar5;
  size_t sVar6;
  char *pcVar7;
  char *pcVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong local_50;
  ulong uStack_48;
  ulong local_40;
  long *local_38;
  
  local_38 = (long *)FUN_00612290();
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  if ((param_2 != (char *)0x0) && (sVar4 = strlen(param_2), sVar4 != 0)) {
    if ((long)sVar4 < 1) {
LAB_006824a8:
      pcVar7 = param_2 + sVar4;
    }
    else {
      pcVar7 = param_2;
      if (*param_2 != '/') {
        pcVar8 = param_2;
        sVar6 = sVar4;
        do {
          sVar6 = sVar6 - 1;
          if (sVar6 == 0) goto LAB_006824a8;
          pcVar7 = pcVar8 + 1;
          pcVar1 = pcVar8 + 1;
          pcVar8 = pcVar7;
        } while (*pcVar1 != '/');
      }
    }
    if ((param_2 + sVar4 != pcVar7) &&
       (uVar10 = (long)pcVar7 - (long)param_2, uVar10 != 0xffffffffffffffff)) {
      uVar2 = sVar4;
      if (uVar10 <= sVar4) {
        uVar2 = uVar10;
      }
      sVar6 = 4;
      if (uVar2 < 5) {
        sVar6 = uVar2;
      }
      if (sVar6 == 0) {
        if (uVar2 < 5) goto LAB_0068251c;
      }
      else {
        iVar3 = memcmp(param_2,&DAT_03942da7,sVar6);
        iVar5 = iVar3;
        if (iVar3 == 0) {
          iVar5 = 1;
        }
        if ((uVar2 < 5) && (iVar3 == 0)) {
LAB_0068251c:
          iVar5 = -(uint)(uVar2 < 4);
        }
        if (iVar5 == 0) {
          FUN_00682270(&local_50,param_2 + uVar10 + 1,sVar4 - (uVar10 + 1));
          if (((long *)param_1[3] == local_38) ||
             (uVar10 = (**(code **)(*(long *)param_1[3] + 0x20))(), (uVar10 & 1) != 0)) {
            if ((*param_1 & 1) == 0) {
              *(undefined2 *)param_1 = 0;
            }
            else {
              *(undefined1 *)param_1[2] = 0;
              param_1[1] = 0;
              if ((*param_1 & 1) != 0) {
                (**(code **)(*(long *)param_1[3] + 0x18))
                          ((long *)param_1[3],param_1[2],*param_1 & 0xfffffffffffffffe,1);
                *param_1 = 0;
              }
            }
            param_1[2] = local_40;
            param_1[1] = uStack_48;
            *param_1 = local_50;
            return 1;
          }
          if (&local_50 != param_1) {
            uVar10 = local_50 >> 1 & 0x7f;
            uVar2 = (ulong)&local_50 | 1;
            if ((local_50 & 1) != 0) {
              uVar10 = uStack_48;
              uVar2 = local_40;
            }
                    /* try { // try from 00682630 to 00682637 has its CatchHandler @ 00682648 */
            FUN_02762710(param_1,uVar2,uVar10);
          }
          uVar9 = 1;
          goto joined_r0x00682640;
        }
      }
    }
  }
  uVar9 = 0;
joined_r0x00682640:
  if ((local_50 & 1) != 0) {
    (**(code **)(*local_38 + 0x18))(local_38,local_40,local_50 & 0xfffffffffffffffe,1);
  }
  return uVar9;
}


