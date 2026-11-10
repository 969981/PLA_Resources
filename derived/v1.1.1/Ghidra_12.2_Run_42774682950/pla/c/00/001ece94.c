/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001ece94; name: FUN_001ece94
 */


int FUN_001ece94(long *param_1,ulong param_2,undefined8 param_3)

{
  int iVar1;
  char *pcVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  char *pcVar8;
  long lVar9;
  char *pcVar10;
  long lVar11;
  long local_78 [3];
  
  local_78[2] = param_3;
  lVar11 = *param_1;
  if ((param_2 & 1) == 0) {
    local_78[0] = *(long *)(lVar11 + 0x808);
    if (((*(uint *)((long)param_1 + 0x3fc) & 0x4020) == 0x20) &&
       ((*(byte *)(lVar11 + 0xf40) >> 4 & 1) != 0)) {
      local_78[1] = *(undefined8 *)(lVar11 + 0x810);
      lVar4 = 2;
      goto LAB_001ecf14;
    }
  }
  else {
    if ((*(byte *)(lVar11 + 0xf40) >> 4 & 1) == 0) {
      local_78[0] = *(long *)(lVar11 + 0x808);
    }
    else {
      local_78[0] = *(long *)(lVar11 + 0x810);
    }
  }
  lVar4 = 1;
LAB_001ecf14:
  lVar5 = 0;
  do {
    for (plVar7 = (long *)local_78[lVar5]; plVar7 != (long *)0x0; plVar7 = (long *)plVar7[1]) {
      pcVar8 = (char *)*plVar7;
      pcVar2 = strchr(pcVar8,0x3a);
      if (pcVar2 == (char *)0x0) {
        pcVar2 = strchr(pcVar8,0x3b);
        if (pcVar2 != (char *)0x0) {
          pcVar8 = pcVar2;
          do {
            pcVar10 = pcVar8;
            pcVar8 = pcVar10 + 1;
            if (*pcVar8 == '\0') goto LAB_001ecfb0;
            iVar1 = FUN_001e33f4();
          } while (iVar1 != 0);
          if (*pcVar8 == '\0') {
LAB_001ecfb0:
            if (*pcVar10 == ';') {
              lVar9 = FUN_002044f4(*plVar7);
              if (lVar9 == 0) {
                FUN_001ec82c(local_78 + 2);
                return 0x1b;
              }
              pcVar10[lVar9 - *plVar7] = ':';
              pcVar2 = pcVar10 + (lVar9 - *plVar7);
            }
            else {
              lVar9 = 0;
            }
            if (pcVar2 != (char *)0x0) goto LAB_001ecf58;
          }
        }
      }
      else {
        lVar9 = 0;
LAB_001ecf58:
        do {
          pcVar2 = pcVar2 + 1;
          if (*pcVar2 == '\0') {
            cVar3 = '\0';
            goto joined_r0x001ecff0;
          }
          iVar1 = FUN_001e33f4();
        } while (iVar1 != 0);
        cVar3 = *pcVar2;
joined_r0x001ecff0:
        if ((lVar9 != 0) || (cVar3 != '\0')) {
          lVar6 = lVar9;
          if (lVar9 == 0) {
            lVar6 = *plVar7;
          }
          if ((param_1[0x91] == 0) || (iVar1 = thunk_FUN_001f8bec("Host:",lVar6,5), iVar1 == 0)) {
            iVar1 = *(int *)(lVar11 + 0xa38);
            if (iVar1 == 3) {
              iVar1 = thunk_FUN_001f8bec("Content-Type:",lVar6,0xd);
              if (iVar1 != 0) goto LAB_001ed0c8;
              iVar1 = *(int *)(lVar11 + 0xa38);
            }
            if (((((iVar1 == 4) &&
                  (iVar1 = thunk_FUN_001f8bec("Content-Type:",lVar6,0xd), iVar1 != 0)) ||
                 ((*(char *)((long)param_1 + 0x3fd) < '\0' &&
                  (iVar1 = thunk_FUN_001f8bec("Content-Length:",lVar6,0xf), iVar1 != 0)))) ||
                (((param_1[0x94] != 0 &&
                  (iVar1 = thunk_FUN_001f8bec("Connection:",lVar6,0xb), iVar1 != 0)) ||
                 (((int)param_1[0x46] == 0x14 &&
                  (iVar1 = thunk_FUN_001f8bec("Transfer-Encoding:",lVar6,0x12), iVar1 != 0)))))) ||
               ((((iVar1 = thunk_FUN_001f8bec("Authorization:",lVar6,0xe), iVar1 != 0 ||
                  (iVar1 = thunk_FUN_001f8bec("Cookie:",lVar6,7), iVar1 != 0)) &&
                 ((*(byte *)(lVar11 + 0x15a4) >> 1 & 1) != 0)) &&
                (((*(long *)(lVar11 + 0x1148) != 0 && ((*(byte *)(lVar11 + 0xf42) >> 4 & 1) == 0))
                 && (iVar1 = FUN_001f8b48(*(long *)(lVar11 + 0x1148),param_1[0x1a]), iVar1 == 0)))))
               ) goto LAB_001ed0c8;
            iVar1 = FUN_001ecb14(local_78 + 2,&DAT_0395cbc0,lVar6);
          }
          else {
LAB_001ed0c8:
            iVar1 = 0;
          }
          if (lVar9 != 0) {
            FUN_002044d4(lVar9);
          }
          if (iVar1 != 0) {
            return iVar1;
          }
        }
      }
    }
    lVar5 = lVar5 + 1;
    if (lVar5 == lVar4) {
      return 0;
    }
  } while( true );
}


