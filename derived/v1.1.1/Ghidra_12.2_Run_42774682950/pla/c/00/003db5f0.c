/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003db5f0; name: FUN_003db5f0
 */


void FUN_003db5f0(void)

{
  void *__ptr;
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long local_80;
  undefined8 uStack_78;
  long local_70;
  
  lVar3 = 0;
  do {
    FUN_002ef710(&DAT_0439bca8 + lVar3 * 0x38);
    if ((&DAT_0439bcd0)[lVar3 * 7] != 0) {
      FUN_002ebea0("external/com_google_grpc_base/src/core/lib/slice/slice_intern.cc",0x167,0,
                   "WARNING: %lu metadata strings were leaked");
      uVar1 = (&DAT_0439bcd8)[lVar3 * 7];
      if (uVar1 != 0) {
        lVar4 = 0;
        lVar2 = *(long *)(&DAT_0439bcc8)[lVar3 * 7];
        do {
          if (lVar2 == 0) {
            if (uVar1 <= lVar4 + 1U) break;
          }
          else {
            do {
              local_70 = lVar2 + 0x78;
              uStack_78 = *(undefined8 *)(lVar2 + 0x50);
              local_80 = lVar2;
              __ptr = (void *)FUN_00304ac0(&local_80,3);
              FUN_002ebea0("external/com_google_grpc_base/src/core/lib/slice/slice_intern.cc",0x16d,
                           0,"LEAKED: %s",__ptr);
              free(__ptr);
              lVar2 = *(long *)(lVar2 + 0x70);
            } while (lVar2 != 0);
            uVar1 = (&DAT_0439bcd8)[lVar3 * 7];
            if (uVar1 <= lVar4 + 1U) break;
          }
          lVar4 = lVar4 + 1;
          lVar2 = *(long *)((&DAT_0439bcc8)[lVar3 * 7] + lVar4 * 8);
        } while( true );
      }
      uVar1 = FUN_002f5aa0();
      if ((uVar1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
    }
    free((void *)(&DAT_0439bcc8)[lVar3 * 7]);
    lVar3 = lVar3 + 1;
    if (lVar3 == 0x20) {
      return;
    }
  } while( true );
}


