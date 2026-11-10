/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f29c6c; name: FUN_02f29c6c
 */


long FUN_02f29c6c(long param_1)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = param_1 + 0x78;
  if (*(int *)(param_1 + 0x340) == 1) {
    plVar1 = *(long **)(param_1 + 0x118);
    if (plVar1 == (long *)0x0) {
      plVar1 = *(long **)(param_1 + 0x198);
    }
    else {
      if ((*(short *)(param_1 + 0x128) == 0) && (*(short *)(param_1 + 0x338) == 0)) {
        if (*(long *)(param_1 + 0x2b0) == 0) {
          (**(code **)(*plVar1 + 0x40))(plVar1,lVar2);
        }
        else {
          (**(code **)(*plVar1 + 0x40))(plVar1,lVar2,0,param_1 + 0x2b0);
          lVar2 = param_1 + 0x2b0;
        }
      }
      else if ((*(short *)(param_1 + 0x12a) == 0) && (*(short *)(param_1 + 0x33a) == 0)) {
        (**(code **)(*plVar1 + 0x18))();
      }
      *(undefined2 *)(param_1 + 0x12a) = *(undefined2 *)(param_1 + 0x128);
      plVar1 = *(long **)(param_1 + 0x198);
    }
    if (plVar1 == (long *)0x0) {
      plVar1 = *(long **)(param_1 + 0x218);
    }
    else {
      if ((*(short *)(param_1 + 0x1a8) == 0) && (*(short *)(param_1 + 0x338) == 0)) {
        if (*(long *)(param_1 + 0x2c8) == 0) {
          (**(code **)(*plVar1 + 0x40))(plVar1,lVar2);
        }
        else {
          (**(code **)(*plVar1 + 0x40))(plVar1,lVar2,0,param_1 + 0x2c8);
          lVar2 = param_1 + 0x2c8;
        }
      }
      else if ((*(short *)(param_1 + 0x1aa) == 0) && (*(short *)(param_1 + 0x33a) == 0)) {
        (**(code **)(*plVar1 + 0x18))();
      }
      *(undefined2 *)(param_1 + 0x1aa) = *(undefined2 *)(param_1 + 0x1a8);
      plVar1 = *(long **)(param_1 + 0x218);
    }
    if (plVar1 == (long *)0x0) {
      plVar1 = *(long **)(param_1 + 0x298);
    }
    else {
      if ((*(short *)(param_1 + 0x228) == 0) && (*(short *)(param_1 + 0x338) == 0)) {
        if (*(long *)(param_1 + 0x2e0) == 0) {
          (**(code **)(*plVar1 + 0x40))(plVar1,lVar2);
        }
        else {
          (**(code **)(*plVar1 + 0x40))(plVar1,lVar2,0,param_1 + 0x2e0);
          lVar2 = param_1 + 0x2e0;
        }
      }
      else if ((*(short *)(param_1 + 0x22a) == 0) && (*(short *)(param_1 + 0x33a) == 0)) {
        (**(code **)(*plVar1 + 0x18))();
      }
      *(undefined2 *)(param_1 + 0x22a) = *(undefined2 *)(param_1 + 0x228);
      plVar1 = *(long **)(param_1 + 0x298);
    }
    if (plVar1 != (long *)0x0) {
      if ((*(short *)(param_1 + 0x2a8) == 0) && (*(short *)(param_1 + 0x338) == 0)) {
        if (*(long *)(param_1 + 0x2f8) == 0) {
          (**(code **)(*plVar1 + 0x40))(plVar1,lVar2);
        }
        else {
          (**(code **)(*plVar1 + 0x40))(plVar1,lVar2,0,param_1 + 0x2f8);
          lVar2 = param_1 + 0x2f8;
        }
      }
      else if ((*(short *)(param_1 + 0x2aa) == 0) && (*(short *)(param_1 + 0x33a) == 0)) {
        (**(code **)(*plVar1 + 0x18))();
      }
      *(undefined2 *)(param_1 + 0x2aa) = *(undefined2 *)(param_1 + 0x2a8);
    }
    return lVar2;
  }
  if (*(short *)(param_1 + 0x338) != 0) {
    return lVar2;
  }
  if ((*(short *)(param_1 + 0x2a8) == 0) && (*(long *)(param_1 + 0x2f8) != 0)) {
    return param_1 + 0x2f8;
  }
  if ((*(short *)(param_1 + 0x228) == 0) && (*(long *)(param_1 + 0x2e0) != 0)) {
    return param_1 + 0x2e0;
  }
  if ((*(short *)(param_1 + 0x1a8) == 0) && (*(long *)(param_1 + 0x2c8) != 0)) {
    return param_1 + 0x2c8;
  }
  if (*(short *)(param_1 + 0x128) != 0) {
    return lVar2;
  }
  if (*(long *)(param_1 + 0x2b0) == 0) {
    return lVar2;
  }
  return param_1 + 0x2b0;
}


