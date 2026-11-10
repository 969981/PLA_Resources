/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0058f8b0; name: FUN_0058f8b0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_0058f8b0(void *param_1,long param_2,long param_3,long param_4,byte param_5,undefined8 *param_6,
            undefined8 param_7)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 *__ptr;
  long lVar3;
  void *__dest;
  undefined8 uVar4;
  char *pcVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  undefined1 auStack_50 [16];
  
  if (param_1 == (void *)0x0) {
    pcVar5 = "key is nullptr.";
  }
  else {
    if (param_6 == (undefined8 *)0x0) {
      pcVar5 = "crypter is nullptr.";
      goto LAB_0058f9a4;
    }
    *param_6 = 0;
    if ((param_2 == 0x2c) || ((param_5 & 1) == 0)) {
      if ((param_3 == 0xc) &&
         ((param_4 == 0x10 && ((param_2 != 0x20 & param_2 != 0x10 & (param_5 ^ 1)) == 0)))) {
        __ptr = (undefined8 *)FUN_002ebd50(0x38);
        *__ptr = &PTR_LAB_0418a110;
        uVar4 = _DAT_03889d80;
        __ptr[3] = _UNK_03889d88;
        __ptr[2] = uVar4;
        if ((param_5 & 1) == 0) {
          __ptr[5] = 0;
          __ptr[1] = param_2;
        }
        else {
          __ptr[1] = 0x20;
          lVar3 = FUN_002ebd50(0x12);
          __ptr[5] = lVar3;
          uVar1 = *(undefined4 *)((long)param_1 + 0x28);
          *(undefined8 *)(lVar3 + 6) = *(undefined8 *)((long)param_1 + 0x20);
          *(undefined4 *)(lVar3 + 0xe) = uVar1;
          puVar7 = (undefined4 *)__ptr[5];
          *puVar7 = 0;
          *(undefined2 *)(puVar7 + 1) = 0;
          param_2 = __ptr[1];
        }
        __dest = (void *)FUN_002ebd50(param_2);
        __ptr[4] = __dest;
        memcpy(__dest,param_1,__ptr[1]);
        uVar4 = FUN_0041b530();
        lVar3 = __ptr[5];
        __ptr[6] = uVar4;
        if ((lVar3 == 0) && (__ptr[1] != 0x10)) {
          if (__ptr[1] == 0x20) {
            uVar4 = FUN_00470890();
            puVar6 = (undefined1 *)__ptr[4];
          }
          else {
            puVar6 = (undefined1 *)__ptr[4];
            uVar4 = 0;
          }
        }
        else {
          uVar4 = FUN_00470870();
          puVar6 = (undefined1 *)__ptr[4];
          if (lVar3 != 0) {
            iVar2 = FUN_00590660(auStack_50,(undefined1 *)__ptr[4],__ptr[5]);
            if (iVar2 != 0) {
              pcVar5 = "Deriving key failed.";
              goto LAB_0058fab0;
            }
            puVar6 = auStack_50;
          }
        }
        iVar2 = FUN_0041c090(__ptr[6],uVar4,0,puVar6,0);
        if (iVar2 == 0) {
          pcVar5 = "Setting key failed.";
        }
        else {
          iVar2 = FUN_0041b980(__ptr[6],9,*(undefined4 *)(__ptr + 2),0);
          if (iVar2 != 0) {
            *param_6 = __ptr;
            return 0;
          }
          pcVar5 = "Setting nonce length failed.";
        }
LAB_0058fab0:
        FUN_0058fae0(pcVar5,param_7);
        free((void *)__ptr[4]);
        free((void *)__ptr[5]);
        FUN_0041b550(__ptr[6]);
        free(__ptr);
        return 0xd;
      }
    }
    pcVar5 = 
    "Invalid key and/or nonce and/or tag length are provided at AEAD crypter instance construction time."
    ;
  }
LAB_0058f9a4:
  FUN_0058fae0(pcVar5,param_7);
  return 9;
}


