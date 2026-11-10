/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02cb2b40; name: FUN_02cb2b40
 */


int FUN_02cb2b40(char *param_1,undefined8 *param_2,undefined8 param_3,undefined4 *param_4)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  DeliveryCacheFile aDStack_48 [8];
  undefined8 local_38;
  
  local_38 = 0;
  nn::bcat::DeliveryCacheFile::DeliveryCacheFile(aDStack_48);
  iVar1 = nn::bcat::DeliveryCacheFile::Open((char *)aDStack_48);
  if (iVar1 == 0) {
    uVar2 = nn::bcat::DeliveryCacheFile::GetSize();
    uVar3 = (**(code **)(*(long *)*param_2 + 0x40))((long *)*param_2,uVar2);
    iVar1 = nn::bcat::DeliveryCacheFile::Read((ulong *)aDStack_48,(long)&local_38,(void *)0x0,uVar3)
    ;
    uVar2 = local_38;
    if (iVar1 == 0) {
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = 1;
      }
      if (param_1 == (char *)0x0) {
        iVar1 = 0;
      }
      else {
        snprintf(param_1,0x3f,"%s",param_3);
        iVar1 = 0;
        *(ulong *)(param_1 + 0x40) = uVar3;
        *(undefined8 *)(param_1 + 0x48) = uVar2;
      }
    }
  }
  nn::bcat::DeliveryCacheFile::Close();
  nn::bcat::DeliveryCacheFile::~DeliveryCacheFile(aDStack_48);
  return iVar1;
}


