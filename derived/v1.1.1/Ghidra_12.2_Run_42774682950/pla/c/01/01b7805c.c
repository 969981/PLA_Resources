/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b7805c; name: FUN_01b7805c
 */


void FUN_01b7805c(undefined8 param_1)

{
  undefined8 local_30;
  char *pcStack_28;
  undefined8 local_20;
  long *local_18;
  
  local_30 = 0xf62e003d776c2769;
  pcStack_28 = "PLAY_BA_SYS_BALL_REFRECT";
  local_20 = 0x18;
  local_18 = (long *)0x0;
  FUN_01b77f14(param_1,&local_30);
  if (local_18 != (long *)0x0) {
    (**(code **)(*local_18 + 0x20))();
  }
  return;
}


