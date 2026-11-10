/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f38238; name: FUN_02f38238
 */


void FUN_02f38238(long param_1)

{
  byte bVar1;
  int iVar2;
  byte bVar3;
  long *plVar4;
  
  for (plVar4 = (long *)DAT_0442c040; (plVar4 != (long *)0x0 && (plVar4 + 1 != (long *)param_1));
      plVar4 = (long *)*plVar4) {
  }
  bVar3 = *(byte *)(plVar4 + 2);
  bVar1 = bVar3 & 0xfd;
  *(byte *)(plVar4 + 2) = bVar1;
  if ((bVar3 & 1) == 0) {
    iVar2 = *(int *)(plVar4 + 1);
    *(byte *)(plVar4 + 2) = bVar1 | 1;
    FUN_02e76a20(iVar2,*(undefined4 *)((long)plVar4 + 0xc),0,1);
    for (plVar4 = (long *)*plVar4; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
      if (*(int *)(plVar4 + 1) == iVar2) {
        *(byte *)(plVar4 + 2) = *(byte *)(plVar4 + 2) | 1;
      }
    }
  }
  FUN_02f382cc();
  return;
}


