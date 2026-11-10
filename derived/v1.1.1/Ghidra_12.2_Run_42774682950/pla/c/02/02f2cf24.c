/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f2cf24; name: FUN_02f2cf24
 */


void FUN_02f2cf24(long param_1)

{
  uint *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  
  if (*(long *)(param_1 + 0x138) == 0) {
    plVar3 = *(long **)(param_1 + 0xf0);
    if ((((plVar3 == (long *)0x0) && (plVar3 = *(long **)(param_1 + 0xf8), plVar3 == (long *)0x0))
        && (plVar3 = *(long **)(param_1 + 0x100), plVar3 == (long *)0x0)) &&
       (plVar3 = *(long **)(param_1 + 0x108), plVar3 == (long *)0x0)) {
      FUN_02f2b48c(param_1 + 0x68,*(undefined8 *)(param_1 + 0x130));
    }
    else {
      (**(code **)(*plVar3 + 0x58))(plVar3,*(undefined8 *)(param_1 + 0x130));
    }
  }
  else {
    FUN_02f2ed58(*(long *)(param_1 + 0x138),*(undefined8 *)(param_1 + 0x130));
  }
  (**(code **)(**(long **)(param_1 + 0x128) + 0x68))(*(long **)(param_1 + 0x128),0);
  puVar5 = *(undefined8 **)(param_1 + 0x128);
  if (puVar5 != (undefined8 *)0x0) {
    (**(code **)*puVar5)(puVar5);
    (*DAT_0442d150)(5,puVar5);
  }
  *(long *)(param_1 + 0x128) = *(long *)(param_1 + 0x130);
  lVar4 = *(long *)(*(long *)(param_1 + 0x130) + 0x18);
  *(undefined8 *)(param_1 + 0x130) = 0;
  lVar2 = 0;
  if (lVar4 != 0) {
    lVar2 = lVar4 + 0x18;
  }
  *(long *)(param_1 + 8) = lVar2;
  FUN_02f30254();
  *(undefined8 *)(param_1 + 0x120) = *(undefined8 *)(*(long *)(param_1 + 0x128) + 0x18);
  puVar1 = (uint *)(*(long *)(*(long *)(param_1 + 0x128) + 0x18) + 0x2a3);
  *puVar1 = *puVar1 & 0xfdffffff;
  return;
}


