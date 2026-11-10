/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004078c0; name: FUN_004078c0
 */


void FUN_004078c0(int *param_1,code *param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  iVar2 = *param_1;
  if (iVar2 < 1) {
LAB_0040791c:
    FUN_00400420(*(undefined8 *)(param_1 + 2),"external/openssl/crypto/stack/stack.c",0x178);
    FUN_00400420(param_1,"external/openssl/crypto/stack/stack.c",0x179);
    return;
  }
  lVar3 = 0;
  lVar1 = **(long **)(param_1 + 2);
  do {
    if (lVar1 == 0) {
      if ((long)iVar2 <= lVar3 + 1) goto LAB_0040791c;
    }
    else {
      (*param_2)();
      iVar2 = *param_1;
      if ((long)iVar2 <= lVar3 + 1) goto LAB_0040791c;
    }
    lVar3 = lVar3 + 1;
    lVar1 = *(long *)(*(long *)(param_1 + 2) + lVar3 * 8);
  } while( true );
}


