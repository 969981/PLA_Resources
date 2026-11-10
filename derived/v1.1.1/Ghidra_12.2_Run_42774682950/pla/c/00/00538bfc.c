/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00538bfc; name: FUN_00538bfc
 */


void FUN_00538bfc(long param_1,uint param_2)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long local_50 [4];
  uint local_24;
  
  *(uint *)(param_1 + 0xbc) = param_2;
  if (*(long *)(param_1 + 0x1c0) != 0) {
    FUN_005436ec(*(long *)(param_1 + 0x1c0),param_2);
    if (4 < param_2) {
      FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/subchannel.cc"
                   ,0x39d,2,"Should never reach here.");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar4 = *(long *)(param_1 + 0x1c0);
    FUN_002f2c60(local_50,(&PTR_s_Subchannel_state_change_to_IDLE_04186220)[(int)param_2]);
    FUN_003ed490(lVar4 + 0xd8,1,local_50);
  }
  plVar2 = *(long **)(param_1 + 0xc0);
  local_50[0] = param_1;
  local_24 = param_2;
  while (plVar2 != (long *)(param_1 + 200)) {
    FUN_00539d24(plVar2 + 5,local_50,&local_24);
    plVar3 = (long *)plVar2[1];
    if ((long *)plVar2[1] == (long *)0x0) {
      plVar3 = plVar2 + 2;
      bVar1 = *(long **)*plVar3 != plVar2;
      plVar2 = (long *)*plVar3;
      if (bVar1) {
        do {
          lVar4 = *plVar3;
          plVar3 = (long *)(lVar4 + 0x10);
          plVar2 = (long *)*plVar3;
        } while (*(long *)*plVar3 != lVar4);
      }
    }
    else {
      do {
        plVar2 = plVar3;
        plVar3 = (long *)*plVar2;
      } while (plVar3 != (long *)0x0);
    }
  }
  plVar2 = *(long **)(param_1 + 0xd8);
  while (plVar2 != (long *)(param_1 + 0xe0)) {
    FUN_00536940(plVar2[5],param_2);
    plVar3 = (long *)plVar2[1];
    if ((long *)plVar2[1] == (long *)0x0) {
      plVar3 = plVar2 + 2;
      bVar1 = *(long **)*plVar3 != plVar2;
      plVar2 = (long *)*plVar3;
      if (bVar1) {
        do {
          lVar4 = *plVar3;
          plVar3 = (long *)(lVar4 + 0x10);
          plVar2 = (long *)*plVar3;
        } while (*(long *)*plVar3 != lVar4);
      }
    }
    else {
      do {
        plVar2 = plVar3;
        plVar3 = (long *)*plVar2;
      } while (plVar3 != (long *)0x0);
    }
  }
  return;
}


