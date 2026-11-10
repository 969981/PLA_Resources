/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ec825c; name: FUN_02ec825c
 */


undefined8 FUN_02ec825c(long param_1,undefined1 *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 local_30;
  undefined8 uStack_28;
  
  *param_2 = 0;
  if (*(char *)(param_1 + 0x3c) != '\0') {
    if ((*(char *)(param_1 + 0x164) != '\0') && (*(long *)(param_1 + 0x158) == 0)) {
      uStack_28 = *(undefined8 *)(param_1 + 0x10);
      local_30 = 0;
      lVar2 = FUN_02f14dac(&local_30);
      *(long *)(param_1 + 0x158) = lVar2;
      if (lVar2 == 0) {
        *param_2 = 1;
        puVar3 = (undefined8 *)FUN_02f59e30(5,0x350);
        if (puVar3 == (undefined8 *)0x0) {
          *(undefined8 *)(param_1 + 0x158) = 0;
          return 0;
        }
        FUN_02f26608();
        *puVar3 = &PTR_FUN_042ac6b8;
        puVar3[0x15] = &PTR_FUN_042ac808;
        *(undefined4 *)(puVar3 + 0x69) = 0x7fffffff;
        *(byte *)((long)puVar3 + 0x34c) = *(byte *)((long)puVar3 + 0x34c) & 0xf8;
        *(undefined8 **)(param_1 + 0x158) = puVar3;
        iVar1 = FUN_02f1551c(puVar3,local_30,uStack_28,0);
        if (iVar1 != 1) {
          lVar2 = *(long *)(param_1 + 0x158);
          if (lVar2 != 0) {
            if (((*(long *)(lVar2 + 0x28) == 0) &&
                (((*(long *)(lVar2 + 0x68) == 0 || (*(long *)(*(long *)(lVar2 + 0x68) + 0x88) == 0))
                 && (lVar4 = FUN_02eca560(lVar2 + 0x68), lVar4 != 0)))) &&
               ((*(long *)(lVar4 + 0x158) == lVar2 || (*(long *)(lVar4 + 0x158) == 0)))) {
              *(undefined1 *)(lVar4 + 0x164) = 0;
              *(undefined8 *)(lVar4 + 0x158) = 0;
            }
            FUN_02f28c70(lVar2);
            FUN_02f59e60(5,lVar2);
          }
          *(undefined8 *)(param_1 + 0x158) = 0;
        }
      }
    }
    *(undefined1 *)(param_1 + 0x164) = 1;
  }
  return *(undefined8 *)(param_1 + 0x158);
}


