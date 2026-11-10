/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003ffda0; name: FUN_003ffda0
 */


undefined8 FUN_003ffda0(long param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  
  if ((((*(long *)(param_1 + 0x508) != 0) && ((*(byte *)(param_1 + 0x44) & 1) == 0)) &&
      (iVar4 = FUN_004c9920(param_1), iVar4 == 0)) && (iVar4 = FUN_004c9950(param_1), iVar4 == 0)) {
    FUN_003ffc60(*(undefined8 *)(param_1 + 0x728),*(undefined8 *)(param_1 + 0x508),1);
  }
  if ((**(long **)(param_1 + 0x598) == *(long *)(param_1 + 8)) ||
     (uVar5 = FUN_004c4ce0(param_1), (int)uVar5 != 0)) {
    if (param_2 != 0) {
      piVar1 = (int *)(param_2 + 0x1d8);
      do {
        iVar4 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar4 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 < 1) {
                    /* WARNING: Subroutine does not return */
        FUN_00404dd0("refcount error","external/openssl/ssl/ssl_sess.c",0x339);
      }
      *(undefined8 *)(param_1 + 0x5a8) = *(undefined8 *)(param_2 + 0x1d0);
    }
    FUN_003fef10(*(undefined8 *)(param_1 + 0x508));
    uVar5 = 1;
    *(long *)(param_1 + 0x508) = param_2;
  }
  return uVar5;
}


