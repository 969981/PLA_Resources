/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007e2d10; name: FUN_007e2d10
 */


void FUN_007e2d10(undefined8 param_1,ulong *param_2)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined *local_50;
  char *pcStack_48;
  undefined4 local_38 [2];
  
  FUN_007ee410();
  FUN_007e3160();
  puVar3 = PTR_DAT_043773b8;
  if (((*param_2 == 0) || ((int)param_2[1] == 0)) || ((*param_2 & 7) != 0)) {
    uVar5 = 0x10407;
  }
  else {
    if (DAT_043a3510 != '\x01') {
      DAT_043a3514 = *(undefined4 *)((long)param_2 + 0xc);
      if ((DAT_043a3511 & 1) == 0) {
        FUN_007e90c0(PTR_DAT_043773b8);
        DAT_043a3511 = 1;
      }
      else {
        uVar6 = *(undefined8 *)(PTR_DAT_043773b8 + 400);
        uVar2 = *(undefined2 *)(PTR_DAT_043773b8 + 0x198);
        uVar1 = PTR_DAT_043773b8[0x19a];
        FUN_007e90c0(PTR_DAT_043773b8);
        *(undefined8 *)(puVar3 + 400) = uVar6;
        *(undefined2 *)(puVar3 + 0x198) = uVar2;
        puVar3[0x19a] = uVar1;
      }
      FUN_007e3170(*param_2,(int)param_2[1]);
      puVar4 = PTR_DAT_043773d0;
      *(int *)(puVar3 + 0xa0) = (int)param_2[1];
      local_50 = puVar4 + 0x10;
      pcStack_48 = "pia common heap";
      FUN_007e324c(2,0,&local_50);
      FUN_007e846c(&DAT_043a3530);
      DAT_043a3518 = &DAT_043a3530;
      *(undefined **)PTR_DAT_043773d8 = &DAT_043a3530;
      FUN_0081a9cc(&PTR_PTR_041aa7d0);
      DAT_043a3510 = '\x01';
      FUN_007ee41c(&local_50,2);
      local_50 = (undefined *)((ulong)local_50 & 0xffffffff00000000);
      goto LAB_007e2d5c;
    }
    uVar5 = 0x10402;
  }
  local_50 = (undefined *)CONCAT44(local_50._4_4_,uVar5);
LAB_007e2d5c:
  local_38[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)&local_50 | 4),(Result *)local_38);
  FUN_007ee578(param_1,&local_50);
  return;
}


