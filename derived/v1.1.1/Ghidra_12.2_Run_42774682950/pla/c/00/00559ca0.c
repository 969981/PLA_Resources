/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00559ca0; name: FUN_00559ca0
 */


undefined8 FUN_00559ca0(long param_1,int param_2)

{
  _func_void_void_ptr *p_Var1;
  long local_38;
  undefined1 auStack_30 [8];
  undefined1 **local_28;
  undefined1 *local_20;
  long *plStack_18;
  
  local_38 = param_1;
  if (param_2 == 3) {
    if (*(long *)(param_1 + 0x198) == -1) goto LAB_00559d18;
    p_Var1 = (_func_void_void_ptr *)&LAB_0055a720;
  }
  else {
    if (param_2 != 0) {
      if (*(ulong *)(param_1 + 0x1a0) != 0xffffffffffffffff) {
        local_20 = auStack_30;
        plStack_18 = &local_38;
        local_28 = &local_20;
        std::__call_once((ulong *)(param_1 + 0x1a0),&local_28,(_func_void_void_ptr *)&LAB_0055a770);
      }
      return *(undefined8 *)(param_1 + 0x90);
    }
    if (*(long *)(param_1 + 0x198) == -1) goto LAB_00559d18;
    p_Var1 = (_func_void_void_ptr *)&LAB_0055a6c0;
  }
  plStack_18 = &local_38;
  local_20 = auStack_30;
  local_28 = &local_20;
  std::__call_once((ulong *)(param_1 + 0x198),&local_28,p_Var1);
LAB_00559d18:
  return *(undefined8 *)(param_1 + 0x88);
}


