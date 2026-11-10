/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002ec1e0; name: FUN_002ec1e0
 */


void FUN_002ec1e0(void)

{
  char *__ptr;
  int iVar1;
  long lVar2;
  char *local_18;
  
  FUN_002eead8(&local_18,&PTR_s_grpc_verbosity_04152fd0);
  if (*local_18 != '\0') {
                    /* try { // try from 002ec204 to 002ec237 has its CatchHandler @ 002ec2ac */
    iVar1 = FUN_002ec9d0(local_18,"DEBUG");
    if (iVar1 == 0) {
      lVar2 = 0;
      __ptr = local_18;
      goto joined_r0x002ec248;
    }
    iVar1 = FUN_002ec9d0(local_18,&DAT_038d064d);
    if (iVar1 == 0) {
      lVar2 = 1;
      __ptr = local_18;
      goto joined_r0x002ec248;
    }
    FUN_002ec9d0(local_18,"ERROR");
  }
  lVar2 = 2;
  __ptr = local_18;
joined_r0x002ec248:
  if (DAT_04152fc0 == -1) {
    DAT_04152fc0 = lVar2;
  }
  if (__ptr != (char *)0x0) {
    local_18 = (char *)0x0;
                    /* try { // try from 002ec280 to 002ec283 has its CatchHandler @ 002ec2a8 */
    free(__ptr);
  }
  return;
}


