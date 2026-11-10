/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0067ff7c; name: FUN_0067ff7c
 */


void FUN_0067ff7c(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *in_x6;
  undefined8 *in_x7;
  long lVar4;
  undefined8 local_110;
  long local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  long local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  FUN_00782cfc(param_1,*param_2,0);
  *param_1 = (long)(PTR_DAT_04375ae8 + 0x10);
  lVar4 = *in_x6;
  param_1[0x28] = in_x6[1];
  param_1[0x27] = lVar4;
  lVar4 = *param_2;
  param_1[0x2a] = param_2[1];
  param_1[0x29] = lVar4;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined1 *)((long)param_1 + 0x159) = 1;
  local_110 = *in_x7;
  local_108 = in_x7[1];
  if (local_108 == 0) {
    local_98 = 0;
  }
  else {
    plVar1 = (long *)(local_108 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    local_98 = local_108;
  }
  local_90 = in_x7[2];
  uStack_88 = in_x7[3];
  in_x7[2] = 0;
  in_x7[3] = 0;
  local_80 = in_x7[4];
  uStack_78 = in_x7[5];
  in_x7[4] = 0;
  in_x7[5] = 0;
  local_70 = in_x7[6];
  uStack_68 = in_x7[7];
  local_d0 = *(undefined1 *)(in_x7 + 8);
  in_x7[6] = 0;
  in_x7[7] = 0;
  local_58 = in_x7[9];
  uStack_50 = in_x7[10];
  in_x7[9] = 0;
  in_x7[10] = 0;
  local_48 = in_x7[0xb];
  uStack_40 = in_x7[0xc];
  in_x7[0xb] = 0;
  in_x7[0xc] = 0;
  local_a8 = in_x7[0xd];
  if (local_98 != 0) {
    plVar1 = (long *)(local_98 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  local_100 = 0;
  uStack_f8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_b8 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b0 = 0;
  uStack_a0 = local_110;
  local_60 = local_d0;
  local_38 = local_a8;
  FUN_00680410(param_1 + 0x19,&uStack_a0);
  FUN_0067f50c(&uStack_a0);
  FUN_0067f50c(&local_110);
  return;
}


