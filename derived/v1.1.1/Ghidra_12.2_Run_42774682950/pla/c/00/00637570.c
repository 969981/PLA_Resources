/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00637570; name: FUN_00637570
 */


void FUN_00637570(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  
  *param_1 = (long)(PTR_DAT_043754e8 + 0x10);
  param_1[1] = *param_2;
  lVar5 = param_2[1];
  param_1[2] = lVar5;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar4 = PTR_DAT_04375660;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[3] = (long)(puVar4 + 0x10);
  param_1[4] = (long)param_1;
  param_1[5] = (long)"/nn.npln.friends.v1.Friends/ActivateUser";
                    /* try { // try from 006375e4 to 0063764b has its CatchHandler @ 0063765c */
  lVar5 = (**(code **)(*(long *)*param_2 + 0x28))();
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[7] = lVar5;
  param_1[8] = (long)"/nn.npln.friends.v1.Friends/ListFriendUsers";
  lVar5 = (**(code **)(*(long *)*param_2 + 0x28))();
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[10] = lVar5;
  param_1[0xb] = (long)"/nn.npln.friends.v1.Friends/ListBlockingUsers";
  lVar5 = (**(code **)(*(long *)*param_2 + 0x28))();
  param_1[0xd] = lVar5;
  param_1[0xe] = (long)"/nn.npln.friends.v1.Friends/SubscribeFriendUsers";
  *(undefined4 *)(param_1 + 0xf) = 2;
  lVar5 = (**(code **)(*(long *)*param_2 + 0x28))();
  param_1[0x10] = lVar5;
  return;
}


