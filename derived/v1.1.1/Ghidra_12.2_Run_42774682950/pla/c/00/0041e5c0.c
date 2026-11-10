/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0041e5c0; name: FUN_0041e5c0
 */


/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_0041e5c0(long *******param_1,long *param_2,char *param_3,ulong *param_4,undefined4 param_5,
            undefined8 param_6,undefined4 param_7)

{
  char *pcVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  ulong uVar8;
  long *******ppppppplVar9;
  long ******pppppplVar10;
  undefined8 local_68;
  char local_5c [4];
  char *local_58;
  long *******local_50;
  char *local_48;
  
  if (param_1 == (long *******)0x0) {
    return 0;
  }
  uVar8 = *param_4;
  local_58 = (char *)*param_2;
  uVar6 = (uint)uVar8;
  uVar5 = uVar6 & 0xc0;
  ppppppplVar9 = param_1;
  if ((uVar6 >> 0xc & 1) != 0) {
    ppppppplVar9 = (long *******)&local_50;
    local_50 = param_1;
  }
  local_48 = param_3;
  if ((uVar8 & 6) == 0) {
    if ((uVar6 >> 3 & 1) == 0) {
      uVar3 = FUN_0041d100(ppppppplVar9,&local_58,param_3,param_4[4],0xffffffff,0,param_5,param_6,
                           param_7);
      if ((int)uVar3 == -1) {
        return uVar3;
      }
      if ((int)uVar3 != 0) {
LAB_0041e8b0:
        *param_2 = (long)local_58;
        return 1;
      }
      uVar3 = 0x3a;
      uVar4 = 0x273;
    }
    else {
      uVar3 = FUN_0041d100(ppppppplVar9,&local_58,param_3,param_4[4],(int)param_4[1],uVar5,param_5,
                           param_6,param_7);
      if ((int)uVar3 == -1) {
        return uVar3;
      }
      if ((int)uVar3 != 0) goto LAB_0041e8b0;
      uVar3 = 0x3a;
      uVar4 = 0x26a;
    }
  }
  else {
    if ((uVar6 >> 3 & 1) == 0) {
      uVar5 = 0;
      uVar7 = 0x10;
      if ((uVar8 & 2) != 0) {
        uVar7 = 0x11;
      }
    }
    else {
      uVar7 = (undefined4)param_4[1];
    }
    uVar3 = FUN_0041e390(&local_48,0,0,local_5c,0,&local_58,param_3,uVar7,uVar5,(char)param_5,
                         param_6);
    if ((int)uVar3 == -1) {
      return uVar3;
    }
    if ((int)uVar3 == 0) {
      uVar3 = 0x3a;
      uVar4 = 0x229;
    }
    else {
      pppppplVar10 = *ppppppplVar9;
      if (pppppplVar10 == (long ******)0x0) {
        pppppplVar10 = (long ******)FUN_004071e0();
        *ppppppplVar9 = pppppplVar10;
      }
      else {
        iVar2 = FUN_00407950(pppppplVar10);
        while (0 < iVar2) {
          local_68 = FUN_00407890(pppppplVar10);
          FUN_00421a80(&local_68,param_4[4]);
          iVar2 = FUN_00407950(pppppplVar10);
        }
        pppppplVar10 = *ppppppplVar9;
      }
      pcVar1 = local_58;
      if (pppppplVar10 == (long ******)0x0) {
        uVar3 = 0x41;
        uVar4 = 0x23c;
      }
      else {
        while( true ) {
          local_58 = pcVar1;
          if ((long)local_48 < 1) {
            if (local_5c[0] == '\0') goto LAB_0041e8b0;
            uVar3 = 0x89;
            uVar4 = 0x261;
            goto LAB_0041e83c;
          }
          if (((local_48 != (char *)0x1) && (*pcVar1 == '\0')) && (pcVar1[1] == '\0')) break;
          local_68 = 0;
          iVar2 = FUN_0041d100(&local_68,&local_58,local_48,param_4[4],0xffffffff,0,0,param_6,
                               param_7);
          if (iVar2 == 0) {
            uVar3 = 0x3a;
            uVar4 = 0x254;
            goto LAB_0041e87c;
          }
          local_48 = pcVar1 + ((long)local_48 - (long)local_58);
          iVar2 = FUN_00407800(*ppppppplVar9,local_68);
          pcVar1 = local_58;
          if (iVar2 == 0) {
            uVar3 = 0x41;
            uVar4 = 0x25b;
LAB_0041e87c:
            FUN_004014b0(0xd,0x83,uVar3,"external/openssl/crypto/asn1/tasn_dec.c",uVar4);
            FUN_00421810(local_68,param_4[4]);
            return 0;
          }
        }
        local_58 = pcVar1 + 2;
        if (local_5c[0] != '\0') goto LAB_0041e8b0;
        uVar3 = 0x9f;
        uVar4 = 0x248;
      }
    }
  }
LAB_0041e83c:
  FUN_004014b0(0xd,0x83,uVar3,"external/openssl/crypto/asn1/tasn_dec.c",uVar4);
  return 0;
}


