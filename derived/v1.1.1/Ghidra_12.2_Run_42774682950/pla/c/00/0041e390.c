/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0041e390; name: FUN_0041e390
 */


undefined8
FUN_0041e390(long *param_1,int *param_2,undefined1 *param_3,byte *param_4,byte *param_5,
            long *param_6,long param_7,int param_8,int param_9,char param_10,char *param_11)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long local_70;
  long local_68;
  int local_58;
  int local_54;
  
  lVar3 = *param_6;
  local_70 = lVar3;
  if (param_11 == (char *)0x0) {
    uVar1 = FUN_00409ce0(&local_70,&local_68,&local_54,&local_58,param_7);
  }
  else if (*param_11 == '\0') {
    uVar1 = FUN_00409ce0(&local_70,&local_68,&local_54,&local_58,param_7);
    *(uint *)(param_11 + 4) = uVar1;
    *(long *)(param_11 + 8) = local_68;
    *(int *)(param_11 + 0x14) = local_58;
    *(int *)(param_11 + 0x10) = local_54;
    *param_11 = '\x01';
    iVar2 = (int)local_70 - (int)lVar3;
    *(int *)(param_11 + 0x18) = iVar2;
    if (((uVar1 & 0x81) == 0) && (param_7 < local_68 + iVar2)) {
      FUN_004014b0(0xd,0x68,0x9b,"external/openssl/crypto/asn1/tasn_dec.c",0x456);
      goto LAB_0041e558;
    }
  }
  else {
    local_68 = *(long *)(param_11 + 8);
    uVar1 = *(uint *)(param_11 + 4);
    local_58 = *(int *)(param_11 + 0x14);
    local_54 = *(int *)(param_11 + 0x10);
    local_70 = lVar3 + *(int *)(param_11 + 0x18);
  }
  if ((uVar1 >> 7 & 1) == 0) {
    if (-1 < param_8) {
      if ((local_54 != param_8) || (local_58 != param_9)) {
        if (param_10 != '\0') {
          return 0xffffffff;
        }
        if (param_11 != (char *)0x0) {
          *param_11 = '\0';
        }
        FUN_004014b0(0xd,0x68,0xa8,"external/openssl/crypto/asn1/tasn_dec.c",0x46a);
        return 0;
      }
      if (param_11 != (char *)0x0) {
        *param_11 = '\0';
      }
    }
    if ((uVar1 & 1) != 0) {
      local_68 = (lVar3 + param_7) - local_70;
    }
    if (param_4 != (byte *)0x0) {
      *param_4 = (byte)uVar1 & 1;
    }
    if (param_5 != (byte *)0x0) {
      *param_5 = (byte)uVar1 & 0x20;
    }
    if (param_1 != (long *)0x0) {
      *param_1 = local_68;
    }
    if (param_3 != (undefined1 *)0x0) {
      *param_3 = (char)local_58;
    }
    if (param_2 != (int *)0x0) {
      *param_2 = local_54;
    }
    *param_6 = local_70;
    return 1;
  }
  FUN_004014b0(0xd,0x68,0x66,"external/openssl/crypto/asn1/tasn_dec.c",0x45e);
  if (param_11 == (char *)0x0) {
    return 0;
  }
LAB_0041e558:
  *param_11 = '\0';
  return 0;
}


