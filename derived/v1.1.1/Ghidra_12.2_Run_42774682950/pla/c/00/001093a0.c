/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001093a0; name: FUN_001093a0
 */


void FUN_001093a0(undefined1 *param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  undefined1 *puVar2;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined1 *local_240;
  int local_238;
  undefined1 auStack_234 [516];
  
  if (param_2 < 0) {
    local_240 = (undefined1 *)(long)param_2;
    local_238 = 0;
    puVar2 = auStack_234;
  }
  else {
    puVar2 = param_1;
    if (param_2 < 0x200) {
      puVar2 = auStack_234;
    }
    local_240 = param_1;
    local_238 = param_2;
  }
  local_260 = *param_4;
  uStack_258 = param_4[1];
  local_250 = param_4[2];
  uStack_248 = param_4[3];
  iVar1 = FUN_00105f20(&LAB_00109450,&local_240,puVar2,param_3,&local_260);
  if ((param_1 != (undefined1 *)0x0) && (param_2 != 0)) {
    if (param_2 <= iVar1) {
      iVar1 = param_2 + -1;
    }
    param_1[iVar1] = 0;
  }
  return;
}


