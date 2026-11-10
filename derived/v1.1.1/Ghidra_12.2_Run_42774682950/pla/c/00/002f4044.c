/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002f4044; name: FUN_002f4044
 */


undefined8 FUN_002f4044(char *param_1,byte param_2)

{
  int iVar1;
  char *pcVar2;
  long *plVar3;
  bool bVar4;
  
  iVar1 = strcmp(param_1,"all");
  if (iVar1 == 0) {
    plVar3 = *(long **)PTR_DAT_043738b0;
    if (plVar3 != (long *)0x0) {
      do {
        *(byte *)(plVar3 + 2) = param_2 & 1;
        plVar3 = (long *)*plVar3;
      } while (plVar3 != (long *)0x0);
    }
  }
  else {
    iVar1 = strcmp(param_1,"list_tracers");
    if (iVar1 == 0) {
      FUN_002ebea0("external/com_google_grpc_base/src/core/lib/debug/trace.cc",0x4e,0,
                   "available tracers:");
      for (plVar3 = *(long **)PTR_DAT_043738b0; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
        FUN_002ebea0("external/com_google_grpc_base/src/core/lib/debug/trace.cc",0x51,0,
                     &DAT_03949565,plVar3[1]);
      }
    }
    else {
      iVar1 = strcmp(param_1,"refcount");
      plVar3 = *(long **)PTR_DAT_043738b0;
      if (iVar1 == 0) {
        if (plVar3 != (long *)0x0) {
          pcVar2 = strstr((char *)plVar3[1],"refcount");
          while( true ) {
            if (pcVar2 == (char *)0x0) {
              plVar3 = (long *)*plVar3;
            }
            else {
              *(byte *)(plVar3 + 2) = param_2 & 1;
              plVar3 = (long *)*plVar3;
            }
            if (plVar3 == (long *)0x0) break;
            pcVar2 = strstr((char *)plVar3[1],"refcount");
          }
        }
      }
      else {
        if (plVar3 != (long *)0x0) {
          bVar4 = false;
          iVar1 = strcmp(param_1,(char *)plVar3[1]);
          while( true ) {
            if (iVar1 == 0) {
              bVar4 = true;
              *(byte *)(plVar3 + 2) = param_2 & 1;
              plVar3 = (long *)*plVar3;
            }
            else {
              plVar3 = (long *)*plVar3;
            }
            if (plVar3 == (long *)0x0) break;
            iVar1 = strcmp(param_1,(char *)plVar3[1]);
          }
          if (bVar4) {
            return 1;
          }
        }
        if (*param_1 != '\0') {
          FUN_002ebea0("external/com_google_grpc_base/src/core/lib/debug/trace.cc",0x41,2,
                       "Unknown trace var: \'%s\'",param_1);
          return 0;
        }
      }
    }
  }
  return 1;
}


