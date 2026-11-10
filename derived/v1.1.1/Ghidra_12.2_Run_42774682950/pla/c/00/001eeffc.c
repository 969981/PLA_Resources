/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001eeffc; name: FUN_001eeffc
 */


undefined8 FUN_001eeffc(long *param_1,char *param_2,long param_3,long *param_4)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_68 [8];
  
  lVar8 = *param_1;
  *param_4 = 0;
  if (((*(char *)(lVar8 + 0xf44) < '\0') && ((*(byte *)(lVar8 + 0x660) >> 3 & 1) == 0)) &&
     (iVar4 = FUN_001f3df8(param_1,1,param_2,param_3), iVar4 != 0)) {
LAB_001ef05c:
    uVar5 = 4;
  }
  else {
    if (param_3 != 0) {
      plVar1 = param_1 + 8;
LAB_001ef07c:
      do {
        switch((int)param_1[7]) {
        case 0:
          iVar4 = FUN_001e3460(*param_2);
          if (iVar4 == 0) {
            if (*(int *)((long)param_1 + 0x34) == 0) {
              return 2;
            }
            *(undefined1 *)((long)param_1 + (long)*(int *)((long)param_1 + 0x34) + 0x20) = 0;
            iVar4 = FUN_001f8ee4(param_1 + 4,auStack_68,0x10,plVar1);
            if (iVar4 != 0) {
              return 2;
            }
            *(undefined4 *)(param_1 + 7) = 1;
          }
          else {
            if (0xf < *(int *)((long)param_1 + 0x34)) {
              return 1;
            }
            *(char *)((long)param_1 + (long)*(int *)((long)param_1 + 0x34) + 0x20) = *param_2;
            param_3 = param_3 + -1;
            *(int *)((long)param_1 + 0x34) = *(int *)((long)param_1 + 0x34) + 1;
            param_2 = param_2 + 1;
          }
          goto joined_r0x001ef2f0;
        case 1:
          if (*param_2 == '\n') {
            if (*plVar1 == 0) {
              *(undefined4 *)(param_1 + 7) = 5;
              *(undefined4 *)((long)param_1 + 0x54c) = 0;
            }
            else {
              *(undefined4 *)(param_1 + 7) = 2;
            }
          }
          break;
        case 2:
          lVar6 = param_1[8];
          if (param_3 <= param_1[8]) {
            lVar6 = param_3;
          }
          lVar6 = FUN_0020436c(lVar6);
          if (((*(ulong *)(*param_1 + 0xf40) >> 0x27 & 1) == 0) &&
             ((*(byte *)(lVar8 + 0x660) >> 3 & 1) == 0)) {
            if (((*(ulong *)(*param_1 + 0xf40) >> 0x28 & 1) == 0) && (*(long *)(lVar8 + 0x1a0) != 0)
               ) {
              iVar4 = FUN_001ee50c(param_1,*(long *)(lVar8 + 0x1a0),param_2,lVar6);
            }
            else {
              iVar4 = FUN_001f3df8(param_1,1,param_2,lVar6);
            }
            if (iVar4 != 0) goto LAB_001ef05c;
          }
          *param_4 = *param_4 + lVar6;
          lVar7 = *plVar1;
          param_2 = param_2 + lVar6;
          param_3 = param_3 - lVar6;
          *plVar1 = lVar7 - lVar6;
          if (lVar7 - lVar6 != 0) goto switchD_001ef094_default;
          *(undefined4 *)(param_1 + 7) = 3;
          goto joined_r0x001ef2f0;
        case 3:
          if (*param_2 != '\r') {
            if (*param_2 != '\n') {
              return 3;
            }
            *(undefined8 *)((long)param_1 + 0x34) = 0;
            param_1[9] = 0;
          }
          break;
        case 4:
          if (*param_2 == '\n') {
            lVar8 = FUN_0020436c(param_3 + -1);
            param_1[9] = lVar8;
            return 0xffffffff;
          }
          return 3;
        case 5:
          cVar2 = *param_2;
          if ((cVar2 == '\r') || (cVar2 == '\n')) {
            iVar4 = *(int *)((long)param_1 + 0x54c);
            if (iVar4 == 0) {
              *(undefined4 *)(param_1 + 7) = 7;
              goto joined_r0x001ef230;
            }
            *(int *)((long)param_1 + 0x54c) = iVar4 + 1;
            *(undefined1 *)(param_1[0xa8] + (long)iVar4) = 0xd;
            iVar4 = *(int *)((long)param_1 + 0x54c);
            *(int *)((long)param_1 + 0x54c) = iVar4 + 1;
            *(undefined1 *)(param_1[0xa8] + (long)iVar4) = 10;
            *(undefined1 *)(param_1[0xa8] + (long)*(int *)((long)param_1 + 0x54c)) = 0;
            if ((-1 < *(char *)(lVar8 + 0xf44)) &&
               (iVar4 = FUN_001f3df8(param_1,2,param_1[0xa8],(long)*(int *)((long)param_1 + 0x54c)),
               iVar4 != 0)) goto LAB_001ef05c;
            *(undefined4 *)((long)param_1 + 0x54c) = 0;
            *(undefined4 *)(param_1 + 7) = 6;
            if (*param_2 == '\n') goto switchD_001ef094_default;
          }
          else {
            iVar4 = *(int *)((long)param_1 + 0x54c);
            iVar3 = (int)param_1[0xa9];
            if (iVar4 < iVar3) {
              lVar6 = param_1[0xa8];
            }
            else {
              if (iVar3 == 0) {
                *(undefined4 *)(param_1 + 0xa9) = 0x80;
                lVar6 = FUN_002044c4(0x83);
              }
              else {
                *(int *)(param_1 + 0xa9) = (int)((long)iVar3 * 2);
                lVar6 = FUN_002044e4(param_1[0xa8],(long)iVar3 * 2 + 3);
              }
              if (lVar6 == 0) {
                return 6;
              }
              param_1[0xa8] = lVar6;
              cVar2 = *param_2;
              iVar4 = *(int *)((long)param_1 + 0x54c);
            }
            *(int *)((long)param_1 + 0x54c) = iVar4 + 1;
            *(char *)(lVar6 + iVar4) = cVar2;
          }
          break;
        case 6:
          if (*param_2 != '\n') {
            return 3;
          }
          *(undefined4 *)(param_1 + 7) = 7;
          break;
        case 7:
          cVar2 = *param_2;
          if ((cVar2 == '\n') || (cVar2 == '\r')) {
            param_3 = param_3 - (ulong)(cVar2 == '\r');
            if (cVar2 == '\r') {
              param_2 = param_2 + 1;
            }
            *(undefined4 *)(param_1 + 7) = 4;
          }
          else {
            *(undefined4 *)(param_1 + 7) = 5;
          }
          goto joined_r0x001ef230;
        default:
switchD_001ef094_default:
joined_r0x001ef2f0:
          if (param_3 == 0) goto LAB_001ef360;
          goto LAB_001ef07c;
        }
        param_2 = param_2 + 1;
        param_3 = param_3 + -1;
joined_r0x001ef230:
      } while (param_3 != 0);
    }
LAB_001ef360:
    uVar5 = 0;
  }
  return uVar5;
}


