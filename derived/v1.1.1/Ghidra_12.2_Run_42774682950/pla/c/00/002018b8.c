/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002018b8; name: FUN_002018b8
 */


undefined8 FUN_002018b8(long param_1,long param_2,byte *param_3,long *param_4)

{
  char *pcVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  byte *pbVar7;
  int iVar8;
  byte bVar9;
  
  for (lVar6 = 0;
      ((cVar3 = *(char *)(param_1 + lVar6), cVar3 != '\0' && (cVar3 != '=')) && ((int)lVar6 != 0xff)
      ); lVar6 = lVar6 + 1) {
    *(char *)(param_2 + lVar6) = cVar3;
  }
  pcVar1 = (char *)(param_1 + lVar6);
  *(undefined1 *)(param_2 + lVar6) = 0;
  uVar5 = 0;
  if (*pcVar1 == '=') {
    bVar2 = pcVar1[1];
    pbVar7 = (byte *)(pcVar1 + 2);
    if (bVar2 != 0x22) {
      pbVar7 = (byte *)(pcVar1 + 1);
    }
    bVar9 = *pbVar7;
    if (bVar9 != 0) {
      bVar4 = false;
      iVar8 = 0x3ff;
      do {
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        if (bVar9 < 0x22) {
          if ((bVar9 != 10) && (bVar9 != 0xd)) goto LAB_00201994;
LAB_002019a0:
          iVar8 = 0;
        }
        else {
          if (bVar9 == 0x22) {
            if (!bVar4 && bVar2 == 0x22) {
              iVar8 = 0;
              bVar4 = false;
              goto LAB_002019a4;
            }
          }
          else if (bVar9 == 0x2c) {
            if (bVar2 != 0x22) goto LAB_002019a0;
          }
          else if ((bVar9 == 0x5c) && (!bVar4)) {
            bVar4 = true;
            *param_3 = 0x5c;
            param_3 = param_3 + 1;
            goto LAB_002019a4;
          }
LAB_00201994:
          bVar4 = false;
          *param_3 = bVar9;
          param_3 = param_3 + 1;
        }
LAB_002019a4:
        pbVar7 = pbVar7 + 1;
        bVar9 = *pbVar7;
      } while (bVar9 != 0);
    }
    uVar5 = 1;
    *param_3 = 0;
    *param_4 = (long)pbVar7;
  }
  return uVar5;
}


