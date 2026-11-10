/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00212d44; name: FUN_00212d44
 */


long FUN_00212d44(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  
  iVar1 = FUN_002126d0();
  if (iVar1 != -1) {
    if (iVar1 < 0x32) {
      lVar2 = FUN_00212738(0x1000,param_1,param_2);
      if (lVar2 == 0) {
        return 0;
      }
      FUN_00212b04(lVar2);
      nnosStartThread(lVar2);
      return lVar2;
    }
    nnsocketSetLastErrno(0xb);
  }
  return 0;
}


