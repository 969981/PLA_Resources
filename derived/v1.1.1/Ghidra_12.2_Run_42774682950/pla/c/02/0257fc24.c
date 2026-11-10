/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0257fc24; name: FUN_0257fc24
 */


void FUN_0257fc24(long param_1,byte param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long local_140 [12];
  undefined1 *local_e0;
  code *local_d8;
  undefined1 *local_d0;
  long *local_c8;
  long local_c0 [12];
  undefined8 local_60;
  char *pcStack_58;
  undefined8 local_50;
  long *local_48;
  
  if (*(byte *)(param_1 + 0x21) != (param_2 & 1)) {
    lVar4 = *(long *)(param_1 + 0x10);
    if (*(byte *)(param_1 + 0x21) == 0) {
      local_e0 = (undefined1 *)0xa57c90f36346dd21;
      local_d8 = (code *)0x38e2d43;
      local_d0 = (undefined1 *)0xf;
      local_c8 = (long *)0x0;
      if (*(long *)(lVar4 + 0x148) != 0) {
        FUN_0283b430(*(long *)(lVar4 + 0x148),&local_e0);
      }
      FUN_00d2e2f0(0,lVar4,"anime_keep_lock_lockon");
      local_60 = 0x1f9ab25029b2247d;
      pcStack_58 = "anime_to_lock";
      local_50 = 0xd;
      local_48 = (long *)0x0;
      local_e0 = &LAB_0257ffb4;
      local_d8 = FUN_02580008;
      local_d0 = &LAB_0258000c;
      local_c8 = (long *)&LAB_02580018;
      local_140[0] = lVar4;
      local_c0[0] = lVar4;
      FUN_00d2df9c(lVar4,&local_60,&local_e0);
      pcVar1 = local_d8;
      if (local_d8 != (code *)0x0) {
        local_d0 = (undefined1 *)0x0;
        local_c8 = (long *)0x0;
        local_e0 = (undefined1 *)0x0;
        local_d8 = (code *)0x0;
        (*pcVar1)(local_c0);
      }
      if (local_48 != (long *)0x0) {
        (**(code **)(*local_48 + 0x20))();
      }
      FUN_02580008(local_140);
      local_e0 = (undefined1 *)0xc4672f61d2a1cf9;
      local_d8 = (code *)0x393e614;
      local_d0 = (undefined1 *)0x15;
      local_c8 = (long *)0x0;
      FUN_028354b0(&local_e0);
      if (local_c8 != (long *)0x0) {
        (**(code **)(*local_c8 + 0x20))();
      }
    }
    else {
      FUN_00d2e2f0(0,lVar4,"anime_keep_lock_lockon");
      local_e0 = (undefined1 *)0x82a3340dca390664;
      local_d8 = (code *)0x38b12ff;
      local_d0 = (undefined1 *)0x16;
      local_c8 = (long *)0x0;
      lVar2 = 0;
      if (*(long *)(lVar4 + 0x148) != 0) {
        FUN_0283b430(*(long *)(lVar4 + 0x148),&local_e0);
        lVar2 = *(long *)(lVar4 + 0x148);
      }
      local_e0 = (undefined1 *)0x1f9ab25029b2247d;
      local_d8 = (code *)0x39c1131;
      local_d0 = (undefined1 *)0xd;
      local_c8 = (long *)0x0;
      lVar3 = 0;
      if (lVar2 != 0) {
        FUN_0283b430(lVar2,&local_e0);
        lVar3 = *(long *)(lVar4 + 0x148);
      }
      local_e0 = (undefined1 *)0xa57c90f36346dd21;
      local_d8 = (code *)0x38e2d43;
      local_d0 = (undefined1 *)0xf;
      local_c8 = (long *)0x0;
      if (lVar3 != 0) {
        FUN_0283b1e8(lVar3,&local_e0);
      }
    }
    *(byte *)(param_1 + 0x21) = param_2 & 1;
  }
  return;
}


