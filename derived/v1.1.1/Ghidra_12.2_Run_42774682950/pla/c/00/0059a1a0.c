/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0059a1a0; name: FUN_0059a1a0
 */


void FUN_0059a1a0(long param_1,long param_2)

{
  void *__ptr;
  char *local_30;
  undefined4 local_28;
  
  if (*(long *)(param_1 + 0xee8) != param_2) {
    __ptr = (void *)FUN_00308330(*(undefined8 *)(param_1 + 0x18));
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                 ,0x6dc,0,"Unknown ping response from %s: %lx",__ptr,param_2);
    free(__ptr);
    return;
  }
  local_30 = 
  "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc";
  local_28 = 0x6e0;
  FUN_002f02b4(&local_30,param_1 + 0xed8);
  if (*(long *)(param_1 + 0xec8) != 0) {
    FUN_00598190(param_1,6);
  }
  return;
}


