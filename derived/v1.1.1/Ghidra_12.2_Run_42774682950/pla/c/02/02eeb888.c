/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eeb888; name: FUN_02eeb888
 */


long * FUN_02eeb888(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  char local_38 [4];
  undefined1 auStack_34 [4];
  
  if (*(char *)(param_1 + 0x115) < '\0') {
    plVar3 = *(long **)(param_1 + 0xf8);
    if (plVar3 == (long *)0x0) {
      plVar3 = (long *)(*DAT_0442d138)(0,0x10);
      if (plVar3 != (long *)0x0) {
        FUN_02eef00c(plVar3);
      }
      *(long **)(param_1 + 0xf8) = plVar3;
    }
  }
  else {
    lVar2 = FUN_02eedca0(param_1 + 0xe8,param_2,local_38);
    if ((lVar2 == 0) || (local_38[0] == '\0')) {
      plVar3 = (long *)(*DAT_0442d138)(0,0x10);
      if (plVar3 != (long *)0x0) {
        FUN_02eef00c(plVar3);
        lVar2 = FUN_02ed8240(param_2);
        if (((lVar2 == 0) || (iVar1 = FUN_02eefc18(lVar2,param_1), iVar1 != 1)) ||
           (lVar2 = FUN_02eedd04(param_1 + 0xe8,param_2,auStack_34), lVar2 == 0)) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
          plVar3 = (long *)0x0;
        }
        else {
          *(long **)(lVar2 + 8) = plVar3;
        }
      }
    }
    else {
      plVar3 = *(long **)(lVar2 + 8);
    }
  }
  return plVar3;
}


