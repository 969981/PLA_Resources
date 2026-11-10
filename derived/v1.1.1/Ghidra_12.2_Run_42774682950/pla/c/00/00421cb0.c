/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00421cb0; name: FUN_00421cb0
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_00421cb0(long *******param_1,undefined1 *param_2,int param_3)

{
  int iVar1;
  long *******ppppppplVar2;
  long ******pppppplVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long *******ppppppplVar7;
  undefined8 uVar8;
  ulong *puVar9;
  code *pcVar10;
  long *******local_48;
  
  lVar5 = *(long *)(param_2 + 0x20);
  if ((lVar5 == 0) || (pcVar10 = *(code **)(lVar5 + 0x18), pcVar10 == (code *)0x0)) {
    pcVar10 = (code *)0x0;
  }
  uVar8 = 1;
  switch(*param_2) {
  case 0:
    puVar9 = *(ulong **)(param_2 + 0x10);
    if (puVar9 == (ulong *)0x0) goto switchD_00421d08_caseD_5;
    uVar6 = *puVar9;
    ppppppplVar7 = param_1;
    if (((uint)uVar6 >> 0xc & 1) != 0) {
      ppppppplVar7 = (long *******)&local_48;
      local_48 = param_1;
    }
    if ((uVar6 & 1) != 0) {
      FUN_004221e0(ppppppplVar7,puVar9);
      return 1;
    }
    if ((uVar6 & 0x300) != 0) {
      *ppppppplVar7 = (long ******)0x0;
      return 1;
    }
    if ((uVar6 & 6) == 0) {
      iVar1 = FUN_00421cb0(ppppppplVar7,puVar9[4],(uint)uVar6 & 0x1000);
      break;
    }
    pppppplVar3 = (long ******)FUN_004071e0();
    if (pppppplVar3 != (long ******)0x0) {
      *ppppppplVar7 = pppppplVar3;
      return 1;
    }
    FUN_004014b0(0xd,0x85,0x41,"external/openssl/crypto/asn1/tasn_new.c",0xe7);
    goto LAB_00421ffc;
  case 1:
  case 6:
    if (pcVar10 == (code *)0x0) {
LAB_00421d30:
      if (param_3 == 0) {
        pppppplVar3 = (long ******)
                      FUN_004002a0(*(undefined8 *)(param_2 + 0x28),
                                   "external/openssl/crypto/asn1/tasn_new.c",0x7a);
        *param_1 = pppppplVar3;
        if (pppppplVar3 == (long ******)0x0) goto LAB_00421ffc;
      }
      else {
        memset(*param_1,0,*(size_t *)(param_2 + 0x28));
      }
      iVar1 = FUN_0041fc30(param_1,0,param_2);
      if (iVar1 < 0) {
        if (param_3 == 0) {
          FUN_00400420(*param_1,"external/openssl/crypto/asn1/tasn_new.c",0x81);
          *param_1 = (long ******)0x0;
        }
        goto LAB_00421ffc;
      }
      FUN_0041fd60(param_1,param_2);
      if (0 < *(long *)(param_2 + 0x18)) {
        puVar9 = *(ulong **)(param_2 + 0x10);
        lVar5 = 0;
        do {
          ppppppplVar2 = (long *******)FUN_0041ff60(param_1,puVar9);
          uVar6 = *puVar9;
          ppppppplVar7 = ppppppplVar2;
          if (((uint)uVar6 >> 0xc & 1) != 0) {
            ppppppplVar7 = (long *******)&local_48;
            local_48 = ppppppplVar2;
          }
          if ((uVar6 & 1) == 0) {
            if ((uVar6 & 0x300) == 0) {
              if ((uVar6 & 6) == 0) {
                iVar1 = FUN_00421cb0(ppppppplVar7,puVar9[4],(uint)uVar6 & 0x1000);
                if (iVar1 == 0) goto LAB_00421fcc;
              }
              else {
                pppppplVar3 = (long ******)FUN_004071e0();
                if (pppppplVar3 == (long ******)0x0) {
                  FUN_004014b0(0xd,0x85,0x41,"external/openssl/crypto/asn1/tasn_new.c",0xe7);
LAB_00421fcc:
                  FUN_00421830(param_1,param_2,param_3);
                  goto LAB_00421ffc;
                }
                *ppppppplVar7 = pppppplVar3;
              }
            }
            else {
              *ppppppplVar7 = (long ******)0x0;
            }
          }
          else {
            FUN_004221e0(ppppppplVar7,puVar9);
          }
          lVar5 = lVar5 + 1;
          puVar9 = puVar9 + 5;
        } while (lVar5 < *(long *)(param_2 + 0x18));
      }
      goto joined_r0x00421f30;
    }
    iVar1 = (*pcVar10)(0,param_1,param_2,0);
    if (iVar1 != 0) {
      if (iVar1 == 2) goto LAB_00421fa8;
      goto LAB_00421d30;
    }
LAB_00421f60:
    uVar8 = 100;
    uVar4 = 0xa1;
    goto LAB_00422014;
  case 2:
    if (pcVar10 != (code *)0x0) {
      iVar1 = (*pcVar10)(0,param_1,param_2,0);
      if (iVar1 == 0) goto LAB_00421f60;
      if (iVar1 == 2) goto LAB_00421fa8;
    }
    if (param_3 == 0) {
      pppppplVar3 = (long ******)
                    FUN_004002a0(*(undefined8 *)(param_2 + 0x28),
                                 "external/openssl/crypto/asn1/tasn_new.c",0x61);
      *param_1 = pppppplVar3;
      if (pppppplVar3 == (long ******)0x0) goto LAB_00421ffc;
    }
    else {
      memset(*param_1,0,*(size_t *)(param_2 + 0x28));
    }
    FUN_0041fc10(param_1,0xffffffff,param_2);
joined_r0x00421f30:
    if (pcVar10 != (code *)0x0) {
      iVar1 = (*pcVar10)(1,param_1,param_2,0);
      if (iVar1 != 0) {
        return 1;
      }
      FUN_00421830(param_1,param_2,param_3);
      goto LAB_00421f60;
    }
    goto LAB_00421fa8;
  default:
    goto switchD_00421d08_caseD_3;
  case 4:
    if ((lVar5 == 0) || (*(code **)(lVar5 + 8) == (code *)0x0)) goto LAB_00421fa8;
    iVar1 = (**(code **)(lVar5 + 8))(param_1,param_2);
    break;
  case 5:
switchD_00421d08_caseD_5:
    iVar1 = FUN_00422040(param_1,param_2,param_3);
  }
  if (iVar1 == 0) {
LAB_00421ffc:
    uVar8 = 0x41;
    uVar4 = 0x98;
LAB_00422014:
    FUN_004014b0(0xd,0x79,uVar8,"external/openssl/crypto/asn1/tasn_new.c",uVar4);
    uVar8 = 0;
  }
  else {
LAB_00421fa8:
    uVar8 = 1;
  }
switchD_00421d08_caseD_3:
  return uVar8;
}


