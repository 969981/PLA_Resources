/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00405760; name: FUN_00405760
 */


void FUN_00405760(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  
  if (param_1 == (undefined8 *)0x0) {
    return;
  }
  uVar3 = *(uint *)(param_1 + 3);
  plVar1 = (long *)*param_1;
  if (uVar3 == 0) {
LAB_004057dc:
    FUN_00400420(plVar1,"external/openssl/crypto/lhash/lhash.c",0x5c);
    FUN_00400420(param_1,"external/openssl/crypto/lhash/lhash.c",0x5d);
    return;
  }
  lVar4 = 0;
  lVar2 = *plVar1;
  do {
    if (lVar2 == 0) {
      if ((ulong)uVar3 <= lVar4 + 1U) goto LAB_004057dc;
    }
    else {
      do {
        lVar5 = *(long *)(lVar2 + 8);
        FUN_00400420(lVar2,"external/openssl/crypto/lhash/lhash.c",0x58);
        lVar2 = lVar5;
      } while (lVar5 != 0);
      uVar3 = *(uint *)(param_1 + 3);
      plVar1 = (long *)*param_1;
      if ((ulong)uVar3 <= lVar4 + 1U) goto LAB_004057dc;
    }
    lVar4 = lVar4 + 1;
    lVar2 = plVar1[lVar4];
  } while( true );
}


