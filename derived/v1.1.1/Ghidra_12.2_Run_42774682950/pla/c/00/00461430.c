/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00461430; name: FUN_00461430
 */


void FUN_00461430(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined1 *puVar5;
  
  iVar1 = FUN_00407950();
  if (0 < iVar1) {
    FUN_00402590(param_2,"%*s%s:\n",param_3,&DAT_03996322,param_4);
  }
  iVar1 = FUN_00407950(param_1);
  if (0 < iVar1) {
    iVar1 = 0;
    do {
      puVar3 = (undefined8 *)FUN_00407970(param_1,iVar1);
      FUN_00402590(param_2,&DAT_039ba9ed,param_3 + 2,&DAT_03996322);
      if (*(int *)*puVar3 == 7) {
        piVar4 = *(int **)((int *)*puVar3 + 2);
        iVar2 = *piVar4;
        puVar5 = *(undefined1 **)(piVar4 + 2);
        FUN_004044c0(param_2,&DAT_0395ddaf);
        if (iVar2 == 0x20) {
          FUN_00402590(param_2,&DAT_038c8d79,CONCAT11(*puVar5,puVar5[1]));
          FUN_004044c0(param_2,&DAT_039b07fe);
          FUN_00402590(param_2,&DAT_038c8d79,CONCAT11(puVar5[2],puVar5[3]));
          FUN_004044c0(param_2,&DAT_039b07fe);
          FUN_00402590(param_2,&DAT_038c8d79,CONCAT11(puVar5[4],puVar5[5]));
          FUN_004044c0(param_2,&DAT_039b07fe);
          FUN_00402590(param_2,&DAT_038c8d79,CONCAT11(puVar5[6],puVar5[7]));
          FUN_004044c0(param_2,&DAT_039b07fe);
          FUN_00402590(param_2,&DAT_038c8d79,CONCAT11(puVar5[8],puVar5[9]));
          FUN_004044c0(param_2,&DAT_039b07fe);
          FUN_00402590(param_2,&DAT_038c8d79,CONCAT11(puVar5[10],puVar5[0xb]));
          FUN_004044c0(param_2,&DAT_039b07fe);
          FUN_00402590(param_2,&DAT_038c8d79,CONCAT11(puVar5[0xc],puVar5[0xd]));
          FUN_004044c0(param_2,&DAT_039b07fe);
          FUN_00402590(param_2,&DAT_038c8d79,CONCAT11(puVar5[0xe],puVar5[0xf]));
          FUN_004044c0(param_2,&DAT_0389ffa9);
          FUN_00402590(param_2,&DAT_038c8d79,CONCAT11(puVar5[0x10],puVar5[0x11]));
          FUN_004044c0(param_2,&DAT_039b07fe);
          FUN_00402590(param_2,&DAT_038c8d79,CONCAT11(puVar5[0x12],puVar5[0x13]));
          FUN_004044c0(param_2,&DAT_039b07fe);
          FUN_00402590(param_2,&DAT_038c8d79,CONCAT11(puVar5[0x14],puVar5[0x15]));
          FUN_004044c0(param_2,&DAT_039b07fe);
          FUN_00402590(param_2,&DAT_038c8d79,CONCAT11(puVar5[0x16],puVar5[0x17]));
          FUN_004044c0(param_2,&DAT_039b07fe);
          FUN_00402590(param_2,&DAT_038c8d79,CONCAT11(puVar5[0x18],puVar5[0x19]));
          FUN_004044c0(param_2,&DAT_039b07fe);
          FUN_00402590(param_2,&DAT_038c8d79,CONCAT11(puVar5[0x1a],puVar5[0x1b]));
          FUN_004044c0(param_2,&DAT_039b07fe);
          FUN_00402590(param_2,&DAT_038c8d79,CONCAT11(puVar5[0x1c],puVar5[0x1d]));
          FUN_004044c0(param_2,&DAT_039b07fe);
          FUN_00402590(param_2,&DAT_038c8d79,CONCAT11(puVar5[0x1e],puVar5[0x1f]));
        }
        else if (iVar2 == 8) {
          FUN_00402590(param_2,"%d.%d.%d.%d/%d.%d.%d.%d",*puVar5,puVar5[1],puVar5[2],puVar5[3],
                       puVar5[4],puVar5[5],puVar5[6],puVar5[7]);
        }
        else {
          FUN_00402590(param_2,"IP Address:<invalid>");
        }
      }
      else {
        FUN_004596f0(param_2);
      }
      FUN_004044c0(param_2,&DAT_0396725e);
      iVar1 = iVar1 + 1;
      iVar2 = FUN_00407950(param_1);
    } while (iVar1 < iVar2);
  }
  return;
}


