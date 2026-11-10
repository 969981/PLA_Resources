/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002e4e30; name: FUN_002e4e30
 */


undefined8 FUN_002e4e30(long *param_1,char *param_2)

{
  int iVar1;
  char *__s1;
  int *piVar2;
  long lVar3;
  
  if (param_1 != (long *)0x0) {
    lVar3 = *param_1;
    if (lVar3 == 0) {
      return 0;
    }
    piVar2 = (int *)param_1[1];
    do {
      __s1 = *(char **)(piVar2 + 2);
      iVar1 = strcmp(__s1,param_2);
      if (iVar1 == 0) {
        if (piVar2 == (int *)0x0) {
          return 0;
        }
        if (*piVar2 == 0) {
          return *(undefined8 *)(piVar2 + 4);
        }
        FUN_002ebea0("external/com_google_grpc_base/src/core/lib/channel/channel_args.cc",0x115,2,
                     "%s ignored: it must be an string",__s1);
        return 0;
      }
      piVar2 = piVar2 + 8;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return 0;
}


