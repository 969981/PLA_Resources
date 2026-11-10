/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001f2238; name: FUN_001f2238
 */


bool FUN_001f2238(long param_1,long param_2)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  
  if (param_1 == 0) {
    bVar5 = false;
  }
  else {
    lVar2 = FUN_001e95c8(*(undefined8 *)(param_1 + 0xd8));
    lVar3 = FUN_001e95d4(*(undefined8 *)(param_1 + 0xd8));
    if (*(long **)(param_2 + 0x4c8) == (long *)0x0) {
      lVar4 = -2;
      bVar5 = false;
    }
    else {
      lVar4 = *(long *)(**(long **)(param_2 + 0x4c8) + 0xf0);
      bVar5 = 0 < lVar2 && lVar2 < lVar4;
    }
    if (0 < lVar3) {
      bVar5 = (bool)(bVar5 | lVar3 < *(long *)(param_2 + 0x40));
    }
    pcVar1 = "TRUE";
    if (bVar5 == false) {
      pcVar1 = "FALSE";
    }
    FUN_001f3934(param_1,"Conn: %ld (%p) Receive pipe weight: (%ld/%ld), penalized: %s\n",
                 *(undefined8 *)(param_2 + 0x60),param_2,lVar4,*(long *)(param_2 + 0x40),pcVar1);
  }
  return bVar5;
}


