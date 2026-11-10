/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0022ac88; name: FUN_0022ac88
 */


void FUN_0022ac88(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 local_138;
  long local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_38;
  undefined1 local_34;
  
  if (*(long *)(param_1 + 0xb0) == 0) {
    local_38 = 0x676d6974;
    local_34 = 0;
    if ((*(char *)(param_1 + 0x40) == '.') && (*(char *)(param_1 + 0x41) == '\0')) {
      nn::util::SNPrintf((char *)&local_138,0xff,"%s/%s",&local_38,"__Combined.bntx");
    }
    else {
      nn::util::SNPrintf((char *)&local_138,0xff,"%s/%s/%s",(char *)(param_1 + 0x40),&local_38,
                         "__Combined.bntx");
    }
    iVar2 = FUN_0022c96c(param_1 + 8,&local_138);
    if (iVar2 != -1) {
      local_138 = 0;
      lVar3 = FUN_0022c904(param_1 + 8,&local_138,iVar2);
      if (lVar3 != 0) {
        lVar3 = FUN_00876bf0();
        *(long *)(param_1 + 0xb0) = lVar3;
        if (((lVar3 == 0) || (*(long *)(lVar3 + 0x40) == 0)) ||
           (*(char *)(*(long *)(lVar3 + 0x40) + 0x110) == '\0')) {
          if (*(long *)(param_1 + 0xd0) == 0) {
            local_128 = 0;
            uStack_120 = 0;
            local_138 = CONCAT44(local_138._4_4_,0x21);
            lVar4 = *(long *)(lVar3 + 0x30);
            iVar2 = nn::util::BinaryBlockHeader::GetBlockSize();
            local_138 = CONCAT44(iVar2 + -0x10,(undefined4)local_138);
            local_130 = lVar4 + 0x10;
            FUN_00878498(*(undefined8 *)(lVar3 + 0x40),param_2,&local_138);
            *(undefined8 *)(lVar3 + 0x48) = *(undefined8 *)(lVar3 + 0x40);
            *(undefined4 *)(lVar3 + 0x50) = 0;
          }
          else {
            iVar2 = *(int *)(param_1 + 200);
            iVar1 = *(int *)(param_1 + 0xd8);
            *(long *)(lVar3 + 0x48) = *(long *)(param_1 + 0xd0);
            *(int *)(lVar3 + 0x50) = *(int *)(lVar3 + 0x30) + (iVar1 - iVar2) + 0x10;
          }
        }
      }
    }
  }
  return;
}


