/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004596f0; name: FUN_004596f0
 */


undefined8 FUN_004596f0(undefined8 param_1,undefined4 *param_2)

{
  int iVar1;
  char *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  
  switch(*param_2) {
  case 0:
    pcVar2 = "othername:<unsupported>";
    break;
  case 1:
    lVar3 = *(long *)(param_2 + 2);
    pcVar2 = "email:%s";
    goto LAB_004597ac;
  case 2:
    lVar3 = *(long *)(param_2 + 2);
    pcVar2 = "DNS:%s";
    goto LAB_004597ac;
  case 3:
    pcVar2 = "X400Name:<unsupported>";
    break;
  case 4:
    FUN_00402590(param_1,"DirName:");
    FUN_004486a0(param_1,*(undefined8 *)(param_2 + 2),0,0x82031f);
    return 1;
  case 5:
    pcVar2 = "EdiPartyName:<unsupported>";
    break;
  case 6:
    lVar3 = *(long *)(param_2 + 2);
    pcVar2 = "URI:%s";
LAB_004597ac:
    FUN_00402590(param_1,pcVar2,*(undefined8 *)(lVar3 + 8));
    return 1;
  case 7:
    puVar4 = *(undefined1 **)(*(int **)(param_2 + 2) + 2);
    iVar1 = **(int **)(param_2 + 2);
    if (iVar1 == 0x10) {
      FUN_00402590(param_1,"IP Address");
      FUN_00402590(param_1,&DAT_038a15d0,CONCAT11(*puVar4,puVar4[1]));
      FUN_00402590(param_1,&DAT_038a15d0,CONCAT11(puVar4[2],puVar4[3]));
      FUN_00402590(param_1,&DAT_038a15d0,CONCAT11(puVar4[4],puVar4[5]));
      FUN_00402590(param_1,&DAT_038a15d0,CONCAT11(puVar4[6],puVar4[7]));
      FUN_00402590(param_1,&DAT_038a15d0,CONCAT11(puVar4[8],puVar4[9]));
      FUN_00402590(param_1,&DAT_038a15d0,CONCAT11(puVar4[10],puVar4[0xb]));
      FUN_00402590(param_1,&DAT_038a15d0,CONCAT11(puVar4[0xc],puVar4[0xd]));
      FUN_00402590(param_1,&DAT_038a15d0,CONCAT11(puVar4[0xe],puVar4[0xf]));
      FUN_004044c0(param_1,&DAT_0396725e);
      return 1;
    }
    if (iVar1 == 4) {
      FUN_00402590(param_1,"IP Address:%d.%d.%d.%d",*puVar4,puVar4[1],puVar4[2],puVar4[3]);
      return 1;
    }
    pcVar2 = "IP Address:<invalid>";
    break;
  case 8:
    FUN_00402590(param_1,"Registered ID:");
    FUN_004096a0(param_1,*(undefined8 *)(param_2 + 2));
    return 1;
  default:
    return 1;
  }
  FUN_00402590(param_1,pcVar2);
  return 1;
}


