/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0039de0c; name: FUN_0039de0c
 */


bool FUN_0039de0c(undefined8 param_1,undefined4 param_2,undefined4 param_3,long *param_4,
                 long param_5,undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *local_60;
  long *plStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  lVar2 = *(long *)(param_5 + 0x60);
  if (lVar2 == 0) {
    local_60 = PTR_DAT_04373d18 + 0x10;
    plStack_58 = param_4;
                    /* try { // try from 0039dea8 to 0039dec3 has its CatchHandler @ 0039def0 */
    uVar1 = FUN_003363cc(param_1,param_2,param_3,&local_60,param_6,param_7);
    FUN_00336514(&local_60);
  }
  else {
    uVar3 = *(undefined8 *)(param_5 + 0x68);
    uStack_48 = (**(code **)(*param_4 + 0x98))(param_4);
    local_60 = PTR_DAT_04373d10 + 0x10;
    plStack_58 = (long *)lVar2;
    local_50 = uVar3;
                    /* try { // try from 0039de64 to 0039de7f has its CatchHandler @ 0039def4 */
    uVar1 = FUN_003363cc(param_1,param_2,param_3,&local_60,param_6,param_7);
    FUN_00336514(&local_60);
  }
  return (uVar1 & 1) != 0;
}


