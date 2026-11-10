/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0053c140; name: FUN_0053c140
 */


undefined8 FUN_0053c140(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  char *pcVar3;
  char *pcVar4;
  
  pcVar4 = (char *)*param_1;
  iVar1 = strcmp("unix",pcVar4);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  iVar1 = strcmp("ipv4",pcVar4);
  if (iVar1 == 0) {
    pcVar3 = (char *)param_1[2];
    pcVar4 = pcVar3 + 1;
    if (*pcVar3 != '/') {
      pcVar4 = pcVar3;
    }
    uVar2 = FUN_0053b9f0(pcVar4,param_2,1);
    return uVar2;
  }
  iVar1 = strcmp("ipv6",pcVar4);
  if (iVar1 != 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/parse_address.cc"
                 ,0xe7,2,"Can\'t parse scheme \'%s\'",pcVar4);
    return 0;
  }
  pcVar3 = (char *)param_1[2];
  pcVar4 = pcVar3 + 1;
  if (*pcVar3 != '/') {
    pcVar4 = pcVar3;
  }
  uVar2 = FUN_0053bce0(pcVar4,param_2,1);
  return uVar2;
}


