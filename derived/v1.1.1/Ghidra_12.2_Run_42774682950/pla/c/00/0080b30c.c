/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0080b30c; name: FUN_0080b30c
 */


void FUN_0080b30c(undefined8 param_1,void *param_2)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  Nickname aNStack_f0 [36];
  bool local_cc [4];
  long local_c8;
  long lStack_c0;
  undefined1 auStack_b8 [136];
  long local_30;
  long lStack_28;
  
  memset(param_2,0,0x21);
  puVar1 = PTR_DAT_04377550;
  if (*(long *)PTR_DAT_04377550 != 0) {
    FUN_007e8190(auStack_b8);
    FUN_007e8434(auStack_b8);
    memset(&local_30,0,0x10);
    lVar3 = *(long *)puVar1;
    FUN_007e8410(auStack_b8,lVar3 + 0x1f8);
    local_c8 = *(long *)(lVar3 + 0x280);
    lStack_c0 = *(long *)(lVar3 + 0x288);
    local_30 = local_c8;
    lStack_28 = lStack_c0;
    if (lStack_c0 != 0 || local_c8 != 0) {
      nn::account::Initialize();
      iVar2 = nn::account::GetUserExistence(local_cc,(Uid *)&local_c8);
      if (((iVar2 == 0) && (local_cc[0] != false)) &&
         (iVar2 = nn::account::GetNickname(aNStack_f0,(Uid *)&local_c8), iVar2 == 0)) {
        memcpy(param_2,aNStack_f0,0x20);
      }
    }
    FUN_007e81d4(auStack_b8);
  }
  return;
}


