/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002fe940; name: FUN_002fe940
 */


void FUN_002fe940(undefined8 param_1,char *param_2,long param_3,uint param_4)

{
  long lVar1;
  char *pcVar2;
  undefined8 uVar3;
  char *local_50;
  long lStack_48;
  undefined1 *local_40;
  undefined *puStack_38;
  ulong local_30;
  undefined *puStack_28;
  
  local_50 = param_2;
  lStack_48 = param_3;
  if (((param_3 == 0) || (*param_2 == '[')) ||
     (lVar1 = FUN_002feee0(&local_50,0x3a,0xffffffffffffffff), lVar1 == -1)) {
    uVar3 = 5;
    pcVar2 = "%s:%d";
  }
  else {
    uVar3 = 7;
    pcVar2 = "[%s]:%d";
  }
  puStack_38 = PTR_LAB_043739a0;
  local_30 = (ulong)param_4;
  puStack_28 = PTR_FUN_043737e0;
  local_40 = (undefined1 *)&local_50;
  FUN_002e6390(param_1,pcVar2,uVar3,&local_40,2);
  return;
}


