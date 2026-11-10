/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03323cdc; name: FUN_03323cdc
 */


undefined8 * FUN_03323cdc(char *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auStack_188 [336];
  undefined8 local_38;
  char *local_28;
  
  local_28 = param_1;
  uVar1 = nn::fs::OpenFile((FileHandle *)&local_38,param_1,6);
  if (((param_2 >> 1 & 1) == 0) || (uVar1 != 0)) {
    if ((uVar1 & 0x1ff) == 2) {
      if ((uVar1 & 0x3ffe00) == 0x200) {
        iVar2 = nn::fs::CreateFile(param_1,0);
        if (iVar2 != 0) {
          return (undefined8 *)0x0;
        }
        uVar1 = nn::fs::OpenFile((FileHandle *)&local_38,local_28,6);
        goto LAB_03323e1c;
      }
      if (299 < (uVar1 >> 9 & 0x1fff) - 0xc80) goto LAB_03323e1c;
      if ((1 < DAT_0444ecf8) || (uVar4 = FUN_03327170(), (uVar4 & 1) != 0)) {
        uVar4 = FUN_03327170();
        if ((uVar4 & 1) == 0) {
          FUN_03326994(auStack_188,&DAT_0444eca8,2);
          lVar5 = FUN_03326338(auStack_188,"Insufficient memory trying to open {}",&DAT_0411bac8,
                               &local_28);
          *(char **)(lVar5 + 0x38) =
               "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Platform/Switch/Common/Base/hkNxStreamWriter.cpp"
          ;
          *(undefined8 *)(lVar5 + 0x40) = 0x1f;
          FUN_033269dc(auStack_188);
        }
        else {
          FUN_03326a7c(auStack_188,&DAT_0444eca8,2);
          lVar5 = FUN_03326338(auStack_188,"Insufficient memory trying to open {}",&DAT_0411bac8,
                               &local_28);
          *(char **)(lVar5 + 0x38) =
               "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Platform/Switch/Common/Base/hkNxStreamWriter.cpp"
          ;
          *(undefined8 *)(lVar5 + 0x40) = 0x1f;
          FUN_03326adc(auStack_188);
        }
      }
    }
    else {
LAB_03323e1c:
      if (uVar1 == 0) goto LAB_03323d20;
    }
    puVar3 = (undefined8 *)0x0;
  }
  else {
    nn::fs::SetFileSize(local_38,0);
LAB_03323d20:
    puVar3 = (undefined8 *)FUN_032cf5b0(0x30);
    FUN_03325dbc();
    *puVar3 = &PTR_LAB_04350310;
    puVar3[3] = local_38;
    puVar3[5] = 0;
    *(undefined1 *)(puVar3 + 4) = 1;
  }
  return puVar3;
}


