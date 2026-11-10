/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002e4f80; name: FUN_002e4f80
 */


uint FUN_002e4f80(long *param_1,char *param_2,uint param_3)

{
  int iVar1;
  char *__s1;
  int *piVar2;
  long lVar3;
  
  if ((param_1 != (long *)0x0) && (lVar3 = *param_1, lVar3 != 0)) {
    piVar2 = (int *)param_1[1];
    do {
      __s1 = *(char **)(piVar2 + 2);
      iVar1 = strcmp(__s1,param_2);
      if (iVar1 == 0) {
        if (piVar2 != (int *)0x0) {
          if (*piVar2 == 1) {
            if (piVar2[4] == 0) {
              param_3 = 0;
            }
            else {
              if (piVar2[4] != 1) {
                FUN_002ebea0("external/com_google_grpc_base/src/core/lib/channel/channel_args.cc",
                             0x12d,2,"%s treated as bool but set to %d (assuming true)",__s1);
              }
              param_3 = 1;
            }
          }
          else {
            FUN_002ebea0("external/com_google_grpc_base/src/core/lib/channel/channel_args.cc",0x124,
                         2,"%s ignored: it must be an integer",__s1);
          }
        }
        break;
      }
      piVar2 = piVar2 + 8;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return param_3 & 1;
}


