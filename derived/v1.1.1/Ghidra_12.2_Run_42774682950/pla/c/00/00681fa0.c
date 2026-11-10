/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00681fa0; name: FUN_00681fa0
 */


undefined8 FUN_00681fa0(ulong *param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  size_t sVar4;
  int iVar5;
  size_t sVar6;
  ulong uVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong local_60;
  ulong uStack_58;
  ulong local_50;
  long *local_48;
  
  local_48 = (long *)FUN_00612290();
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  if ((param_2 != (char *)0x0) && (sVar4 = strlen(param_2), sVar4 != 0)) {
    pcVar2 = param_2 + sVar4;
    if ((long)sVar4 < 1) {
LAB_0068201c:
      pcVar10 = pcVar2;
    }
    else {
      pcVar10 = param_2;
      if (*param_2 != '/') {
        pcVar8 = param_2;
        sVar6 = sVar4;
        do {
          sVar6 = sVar6 - 1;
          if (sVar6 == 0) goto LAB_0068201c;
          pcVar10 = pcVar8 + 1;
          pcVar9 = pcVar8 + 1;
          pcVar8 = pcVar10;
        } while (*pcVar9 != '/');
      }
    }
    if ((pcVar2 != pcVar10) &&
       (uVar12 = (long)pcVar10 - (long)param_2, uVar12 != 0xffffffffffffffff)) {
      uVar7 = sVar4;
      if (uVar12 <= sVar4) {
        uVar7 = uVar12;
      }
      sVar6 = 0xc;
      if (uVar7 < 0xd) {
        sVar6 = uVar7;
      }
      if (sVar6 == 0) {
        if (uVar7 < 0xd) goto LAB_00682090;
      }
      else {
        iVar3 = memcmp(param_2,"userSessions",sVar6);
        iVar5 = iVar3;
        if (iVar3 == 0) {
          iVar5 = 1;
        }
        if ((uVar7 < 0xd) && (iVar3 == 0)) {
LAB_00682090:
          iVar5 = -(uint)(uVar7 < 0xc);
        }
        if (iVar5 == 0) {
          uVar7 = sVar4 - (uVar12 + 1);
          pcVar8 = param_2 + uVar12 + 1;
          if (uVar7 == 0) {
LAB_00682140:
            pcVar9 = pcVar2;
          }
          else {
            pcVar9 = pcVar2;
            if ((0 < (long)pcVar2 - (long)pcVar8) && (pcVar9 = pcVar8, *pcVar8 != '/')) {
              param_2 = param_2 + (sVar4 - (long)pcVar10) + -2;
              pcVar10 = pcVar8;
              do {
                if (param_2 == (char *)0x0) goto LAB_00682140;
                pcVar9 = pcVar10 + 1;
                pcVar1 = pcVar10 + 1;
                param_2 = param_2 + -1;
                pcVar10 = pcVar9;
              } while (*pcVar1 != '/');
            }
          }
          uVar12 = (long)pcVar9 - (long)pcVar8;
          if (pcVar2 == pcVar9) {
            uVar12 = 0xffffffffffffffff;
          }
          if (uVar12 <= uVar7) {
            uVar7 = uVar12;
          }
          FUN_00682270(&local_60,pcVar8,uVar7);
          if (((long *)param_1[3] == local_48) ||
             (uVar12 = (**(code **)(*(long *)param_1[3] + 0x20))(), (uVar12 & 1) != 0)) {
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
            param_1[2] = local_50;
            param_1[1] = uStack_58;
            *param_1 = local_60;
            return 1;
          }
          if (&local_60 != param_1) {
            uVar12 = local_60 >> 1 & 0x7f;
            uVar7 = (ulong)&local_60 | 1;
            if ((local_60 & 1) != 0) {
              uVar12 = uStack_58;
              uVar7 = local_50;
            }
                    /* try { // try from 00682214 to 0068221b has its CatchHandler @ 0068222c */
            FUN_02762710(param_1,uVar7,uVar12);
          }
          uVar11 = 1;
          goto joined_r0x00682224;
        }
      }
    }
  }
  uVar11 = 0;
joined_r0x00682224:
  if ((local_60 & 1) != 0) {
    (**(code **)(*local_48 + 0x18))(local_48,local_50,local_60 & 0xfffffffffffffffe,1);
  }
  return uVar11;
}


